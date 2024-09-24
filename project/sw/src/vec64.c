#include "trap.h"
#include "model.h"

#define STR2(s)             #s
#define STR(s)              STR2(s)

#define INST_OPV_BIN(funct6, vm, vs2, vs1, funct3, vd, opcode) 0b##funct6##vm##vs2##vs1##funct3##vd##opcode
#define WORD(inst) ".word "#inst""
#define ASM_CUSTOM(inst) WORD(inst)
#define PUTCH ASM_CUSTOM(0x0005007f)

#define ADDR_A ADDR_QW
#define ADDR_B 0x80900000//ADDR_FEAT+20*96

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


// // void vle64(register int* vd, int64_t rs1){
// //     asm volatile( ".insn r 0x7, 0x6, 0x01, %0, %1, x0": :"r"(vd), "r"(rs1));
// // }

// void vle32(register int* vd, register int* rs1){
//     asm volatile( ".insn r 0x7, 0x6, 0x01, %0, %1, x0": :"r"(vd), "r"(rs1));
// }

// // void vse64(register int* vd, int64_t rs1){
// //     asm volatile( ".insn r 0x27, 0x6, 0x01, %0, %1, x0": :"r"(vd), "r"(rs1));
// // }

// void vse32(register int* vd, register int* rs1){
//     asm volatile( ".insn r 0x27, 0x6, 0x01, %0, %1, x0": :"r"(vd), "r"(rs1));
// }


int main(){

    // int result = custom_mul(10,10);
    // printf("%d\n",result);

    // // register int *reg_vx0 asm ("x0");
    register int *reg_vx1 asm ("x1");
    register int *reg_vx2 asm ("x2");
    // // register int *reg_vx3 asm ("x0");

    // // for(int i=0; i<8; i++){
    // //     reg_vx1[i] = 2;
    // //     reg_vx2[i] = 2;
    // // }
    // // reg_vx3[0] = 1;
    // reg_vx1[0] = 2;
    // printf("vx1:\n");
    // printf("%d\n",reg_vx1[0]);

    // vle64(reg_vx1, ADDR_FEAT);

    // vle64(reg_vx2, ADDR_QW);

    // reg_vx1[0] = 2;
    // reg_vx2[0] = 2;
    // printf("%d\n",(int *)(ADDR_FEAT));

    // vadd_vv(reg_vx1, reg_vx1, reg_vx2);


    // vse64(reg_vx1, 0x80900000);


    // int8_t *p_QWSAVE = (int8_t *)ADDR_QW;
    // for(int i=0; i<64; i++){
    //     printf("%d\t", p_QWSAVE[i]);
    // }
    long k = 7;
    vle32(reg_vx1, (int *)(ADDR_FEAT+k*16));
    vle32(reg_vx2, (int *)(ADDR_QW+k*16));
    vsum_vv(reg_vx1, reg_vx2);
    vse32(reg_vx1, (int *)(ADDR_B));
   

    int32_t sum = 0;
    printf("\nQW:\n");
    int8_t *p_QWSAVE = (int8_t *)ADDR_QW;
    for(int i=0; i<16; i++){
        sum += p_QWSAVE[i+k*16];
        printf("%d\t", p_QWSAVE[i+k*16]);
    }
    printf("\nFEAT:\n");
    int8_t *p_FEATSAVE = (int8_t *)ADDR_FEAT;
    for(int i=0; i<16; i++){
        printf("%d\t", p_FEATSAVE[i+k*16]);
    }

    printf("\nsave:\n");
    // int32_t *p_BSAVE = (int32_t *)ADDR_B;
    int32_t *p_SAVE = (int32_t *)(ADDR_B);
    for(int i=0; i<16; i++){
       
        printf("%d\t", p_SAVE[i]);
    }
    printf("\nsum = %d\n",sum);
    // printf("%d\n",reg_vx1[1]);
    // printf("%d\n",reg_vx1[2]);
    // printf("%d\n",reg_vx1[3]);
    // printf("%d\n",reg_vx1[4]);
    // printf("%d\n",reg_vx1[5]);
    // printf("%d\n",reg_vx1[6]);
    // printf("%d\n",reg_vx1[7]);
    // printf("vx2:\n");
    // reg_vx2[0] = 1;
    // printf("%d\n",reg_vx2[0]);
    // printf("%d\n",reg_vx2[1]);
    // printf("%d\n",reg_vx2[2]);
    // printf("%d\n",reg_vx2[3]);
    // printf("%d\n",reg_vx2[4]);
    // printf("%d\n",reg_vx2[5]);
    // printf("%d\n",reg_vx2[6]);
    // printf("%d\n",reg_vx2[7]);

    // vadd_vv(reg_vx1, reg_vx1, reg_vx2);

    // vadd_vx(reg_vx2, reg_vx1, reg_vx2);
    // vadd_vi(reg_vx2, reg_vx0, reg_vx2);
    // printf("result:\n%d", reg_vx1[0]);

    return 0 ;
}
