#include "trap.h"
#include "model.h"

#define STR2(s)             #s
#define STR(s)              STR2(s)

#define INST_OPV_BIN(funct6, vm, vs2, vs1, funct3, vd, opcode) 0b##funct6##vm##vs2##vs1##funct3##vd##opcode
#define WORD(inst) ".word "#inst""
#define ASM_CUSTOM(inst) WORD(inst)
#define PUTCH ASM_CUSTOM(0x0005007f)

// #define ADDR_A ADDR_QW
// #define ADDR_B ADDR_SAVE//ADDR_FEAT+20*96
#define ADDR_QKVTEMP    ADDR_VB + BIAS_INT8_LEN
#define ADDR_PAR_SUM    0x80900000//ADDR_SAVE 
#define ADDR_QSAVE      ADDR_PAR_SUM + MATRIX_INT8_LEN
#define ADDR_KSAVE      ADDR_PAR_SUM + MATRIX_INT32_LEN
#define ADDR_VSAVE      ADDR_PAR_SUM + MATRIX_INT32_LEN

int custom_mul(int a, int b){
    int result ;
    asm volatile( ".insn r 0x33, 0, 1, %0, %1, %2": "=r" (result): "r" (a), "r" (b) );
    return result ;
}

void custom_putch_1(char ch) {
    asm volatile("mv a0, %0; "PUTCH" " : :"r"(ch));
}

void custom_putch_2(){
    asm volatile( ASM_CUSTOM( INST_OPV_BIN( 000000, 1, 00000, 00000, 000, 00000, 1010111 ) ) );
}

void vadd_vv(register int* vd,register int* vs1,register int* vs2){
    asm volatile( ".insn r 0x57, 0x0, 0x01, %0, %1, %2": :"r"(vd), "r"(vs1), "r"(vs2) );
}


void vadd_vx(register int* vd,register int* rs1,register int* vs2){
    asm volatile( ".insn r 0x57, 0x4, 0x01, %0, %1, %2": :"r"(vd), "r"(rs1), "r"(vs2) );
}

void vadd_vi(register int* vd,register int* imm,register int* vs2){
    asm volatile( ".insn r 0x57, 0x3, 0x01, %0, %1, %2": :"r"(vd), "r"(imm), "r"(vs2) );
}

void vmul_vv(register int* vd,register int* vs1,register int* vs2){
    asm volatile( ".insn r 0x57, 0x0, 0x49, %0, %1, %2": :"r"(vd), "r"(vs1), "r"(vs2) );
}


void vle32(register int* vd, register int* rs1){
    asm volatile( ".insn r 0x7, 0x6, 0x01, %0, %1, x0": :"r"(vd), "r"(rs1));
}

void vle8(register int* vd, register int* rs1){
    asm volatile( ".insn r 0x7, 0x6, 0x03, %0, %1, x0": :"r"(vd), "r"(rs1));
}

void vse32(register int* vd, register int* rs1){
    asm volatile( ".insn r 0x27, 0x6, 0x01, %0, %1, x0": :"r"(vd), "r"(rs1));
}

void vmac_vv(register int* vd,register int* vs1,register int* vs2){
    asm volatile( ".insn r 0x57, 0x0, 0x3, %0, %1, %2": :"r"(vd), "r"(vs1), "r"(vs2) );
}

void vsum_vv(register int* vd, register int* rs1){
    asm volatile( ".insn r 0x57, 0x0, 0x7, %0, %1, x0": :"r"(vd), "r"(rs1));
}

void vsus_vv(register int* vd, register int* rs1){
    asm volatile( ".insn r 0x57, 0x0, 0xf, %0, %1, x0": :"r"(vd), "r"(rs1));
}

// void lui(register int* rd, int imm){
//     asm volatile( ".insn u 0x37, %0, %1": :"r"(rd), "n"(imm) );
// }

// int64_t vec_mac(register int* addr_a, register int* addr_b, register int* addr_c){
//     int64_t result = 0;

//     register int *reg_vx1 asm ("x1");
//     register int *reg_vx2 asm ("x2");

//     // register int *rd asm ("x3");

//     // int64_t a =703710;
//     // asm volatile( ".insn u 0x37, %0, %1": :"r"(rd), "n"(15));
//     // asm volatile( ".insn u 0x37, %0, %1": :"r"(rd),"n"(a) );

//     // printf("\nlui:\n%x\n", rd);


//     vle32(reg_vx1, addr_a);
//     vle32(reg_vx2, addr_b);
//     // vmac_vv(reg_vx1, reg_vx1, reg_vx2);
//     // vsum_vv(reg_vx1, reg_vx2);
//     vsus_vv(reg_vx1, reg_vx2);
//     vse32(reg_vx1, addr_c);
    
//     // vle32(reg_vx1, addr_a);
//     // vle32(reg_vx2, addr_b);
//     // vadd_vv(reg_vx1, reg_vx1, reg_vx2);
//     // vse32(reg_vx1, addr_c);

//     int32_t *p_SAVE = (int32_t *)addr_c;

//     for(int i=0; i<16; i++){
//         result  += p_SAVE[i];
//     }

//     return result;
// }

// void vmac_with_shift(register int* addr_a, register int* addr_b, register int* addr_c){

// }

int main(){

    // int8_t *p_FEAT       = (int8_t *)ADDR_FEAT;
    int8_t *p_QW       = (int8_t *)ADDR_QW;
    int8_t *p_tempT    = (int8_t *)ADDR_QKVTEMP;
    int32_t *p_QSAVE   = (int32_t *)ADDR_QSAVE;
    int32_t *p_PARSUM  = (int32_t *)ADDR_PAR_SUM;

    register int *reg_vx0 asm ("x0");//vector "0"
    register int *reg_vx1 asm ("x1");
    register int *reg_vx2 asm ("x2");
    // register int *reg_vx3 asm ("x3");

    long i,j,k;
    // calculate one
    // for(k=0; k<FEAT_COL_NUM; k++){
    //     p_tempT[k] = p_QW[k*EMBED_DIM];
    // }
    // vse32(reg_vx0, (int *)(ADDR_PAR_SUM));
    // for(k=0; k<6; k++){
    //     vle8(reg_vx1, (int *)(ADDR_FEAT+k*16));
    //     vle8(reg_vx2, (int *)(ADDR_QKVTEMP+k*16));
    //     vmac_vv(reg_vx1, reg_vx1, reg_vx2);
    //     vse32(reg_vx1, (int *)(ADDR_PAR_SUM+k*8));    
    // }
    //     printf("\nWithout sus\n");
    // for(i=0; i<16; i++){
    //     printf("%x\n",p_PARSUM[i]);
    // }
    // vle32(reg_vx2, (int *)(ADDR_PAR_SUM));
    // vsus_vv(reg_vx1,reg_vx2);
    // vse32(reg_vx1, (int *)(ADDR_PAR_SUM));
    // // p_QSAVE[j*EMBED_DIM+i] = p_PARSUM[0];
    // printf("\nAfter sus\n");
    // for(i=0; i<16; i++){
    //     printf("%d\n",p_PARSUM[i]);
    // }
    // printf("FEAT\tq_temp\n");   
    // for(j=0; j<96; j++){
    //     printf("%d\t",p_FEAT[j]);
    //     printf("%d\n",p_tempT[j]);
    // }
    // // Without sus

    // printf("FEAT\tq_temp\n");
    // for(j=0; j<96; j++){
    //     printf("%x\t",p_FEAT[j]);
    //     printf("%x\n",p_tempT[j]);
    // }
    // for(i=0; i<16; i++){
    //     printf("%d\n",p_PARSUM[i]);

    // }

    for(i=0; i<EMBED_DIM; i++){
        for(j=0; j<FEAT_ROW_NUM; j++){
            // trans one col
            for(k=0; k<FEAT_COL_NUM; k++){
                p_tempT[k] = p_QW[k*EMBED_DIM+i];
            }
            // calculate
            vse32(reg_vx0, (int *)(ADDR_PAR_SUM));
            for(k=0; k<6; k++){
                vle8(reg_vx1, (int *)(ADDR_FEAT+k*16));
                vle8(reg_vx2, (int *)(ADDR_QKVTEMP+k*16));
                vmac_vv(reg_vx1, reg_vx1, reg_vx2);
                vse32(reg_vx1, (int *)(ADDR_PAR_SUM+k*8));

            }
            vle32(reg_vx2, (int *)(ADDR_PAR_SUM));
            vsus_vv(reg_vx1,reg_vx2);
            vse32(reg_vx1, (int *)(ADDR_PAR_SUM));
            p_QSAVE[j*EMBED_DIM+i] = p_PARSUM[0];
        }
    }

    //print QSAVE
    int32_t result;
    printf("QSAVE is\n");
    for(i=0; i<FEAT_ROW_NUM; i++){
        for(j=0; j<FEAT_COL_NUM; j++){
            result = p_QSAVE[i*FEAT_COL_NUM + j];
            printf("%d\t ",result);
        }
        printf("\n");
    }
    // int64_t result;

    // register int *addr_a = (int *)(ADDR_FEAT);
    // register int *addr_b = (int *)(ADDR_QW);
    // register int *addr_c = (int *)(ADDR_SAVE);

    // result = vec_mac(addr_a, addr_b, addr_c);

    
    
    // register int *reg_vx1 asm ("x1");
    // vle32(reg_vx1, (int *)(ADDR_FEAT));
    // vadd_vv(reg_vx1, reg_vx1, (int *)(ADDR_QW));
    // vse32(reg_vx1, (int *)(ADDR_SAVE));

    // printf("result: %d",result);

    //test
    // register int *reg_vx1 asm ("x1");
    // register int *reg_vx2 asm ("x2");

    // vle32(reg_vx1, (int *)(ADDR_FEAT));
    // vle32(reg_vx2, (int *)(ADDR_QW));
    // vadd_vv(reg_vx1, reg_vx1, reg_vx2);
    // vse32(reg_vx1, (int *)(ADDR_B));

    // printf("\nFEAT:\n");
    // int8_t *p_FEATSAVE = (int8_t *)ADDR_FEAT;
    // result = 0;
    // for(int i=0; i<16; i++){
        
    //     printf("%d\t", p_FEATSAVE[i]);
    // }
    // printf("\nQW:\n");
    
    // int8_t *p_QWSAVE = (int8_t *)ADDR_QW;
    // for(int i=0; i<16; i++){
    //     result += p_QWSAVE[i];
    //     printf("%d\t", p_QWSAVE[i]);
    // }
    // printf("\nresult: %d\n",result);
    // printf("\nsave:\n");
    // // int32_t *p_BSAVE = (int32_t *)ADDR_B;
    // int32_t *p_SAVE = (int32_t *)(ADDR_SAVE);
    
    // for(int i=0; i<16; i++){
    //     printf("%x\t", p_SAVE[i]);
    // }
    return 0 ;
}
