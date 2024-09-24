#include "trap.h"
#include "model.h"

#define STR2(s)             #s
#define STR(s)              STR2(s)

#define INST_OPV_BIN(funct6, vm, vs2, vs1, funct3, vd, opcode) 0b##funct6##vm##vs2##vs1##funct3##vd##opcode
#define WORD(inst) ".word "#inst""
#define ASM_CUSTOM(inst) WORD(inst)
#define PUTCH ASM_CUSTOM(0x0005007f)

#define ADDR_QKVTEMP    ADDR_VB + BIAS_INT8_LEN
#define ADDR_PAR_SUM    0x80900000//ADDR_SAVE 
#define ADDR_QSAVE      0x80a00000// 32
#define ADDR_KSAVE      0x80b00000// 32
#define ADDR_VSAVE      0x80c00000// 32
#define ADDR_QKTSAVE    0x80d00000// 32

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

// Calculation function
void qkvGenerate(int8_t *p_QKVW, int8_t *p_QKVB, int32_t *p_QKVSAVE){


    int8_t  *p_tempT    = (int8_t *)ADDR_QKVTEMP;
    int32_t *p_PARSUM  = (int32_t *)ADDR_PAR_SUM;
    register int *reg_vx0 asm ("x0");//vector "0"
    register int *reg_vx1 asm ("x1");
    register int *reg_vx2 asm ("x2");

    long i,j,k;
    for(i=0; i<EMBED_DIM; i++){
        // trans one col
        for(k=0; k<FEAT_COL_NUM; k++){
                p_tempT[k] = p_QKVW[k*EMBED_DIM+i];
        }
        for(j=0; j<FEAT_ROW_NUM; j++){
            // calculate
            vse32(reg_vx0, (int *)(ADDR_PAR_SUM));
            for(k=0; k<6; k++){// 6 = 96/16 = FEAT_COL_NUM / valu element's num 
                vle8(reg_vx1, (int *)(ADDR_FEAT+j*FEAT_COL_NUM+k*16));
                vle8(reg_vx2, (int *)(ADDR_QKVTEMP+k*16));
                vmac_vv(reg_vx1, reg_vx1, reg_vx2);
                vse32(reg_vx1, (int *)(ADDR_PAR_SUM+k*8));
            }
            p_PARSUM[k*2] = p_QKVB[j*EMBED_DIM+i];
            vle32(reg_vx2, (int *)(ADDR_PAR_SUM));
            vsus_vv(reg_vx1,reg_vx2);
            vse32(reg_vx1, (int *)(ADDR_PAR_SUM));
            p_QKVSAVE[j*EMBED_DIM+i] = p_PARSUM[0];
        }
    }
}


int main(){
    // Calculate q, k, v

    int8_t *p_QKVW;
    int8_t *p_QKVB;
    int32_t *p_QKVSAVE;
    int8_t *p_tempT    = (int8_t *)ADDR_QKVTEMP;

    int32_t *p_PARSUM  = (int32_t *)ADDR_PAR_SUM;

    int32_t *p_SAVE   = (int32_t *)ADDR_SAVE;
    
    register int *reg_vx0 asm ("x0");//vector "0"
    register int *reg_vx1 asm ("x1");
    register int *reg_vx2 asm ("x2");

    long i,j,k;
    p_QKVW = (int8_t *)ADDR_QW;
    p_QKVB = (int8_t *)ADDR_QB;
    p_QKVSAVE = (int32_t *)ADDR_QSAVE;
    for(i=0; i<EMBED_DIM; i++){
        // trans one col
        for(k=0; k<FEAT_COL_NUM; k++){
                p_tempT[k] = p_QKVW[k*EMBED_DIM+i];
        }
        for(j=0; j<FEAT_ROW_NUM; j++){
            // calculate
            vse32(reg_vx0, (int *)(ADDR_PAR_SUM));
            for(k=0; k<6; k++){// 6 = 96/16 = FEAT_COL_NUM / valu element's num 
                vle8(reg_vx1, (int *)(ADDR_FEAT+j*FEAT_COL_NUM+k*16));
                vle8(reg_vx2, (int *)(ADDR_QKVTEMP+k*16));
                vmac_vv(reg_vx1, reg_vx1, reg_vx2);
                vse32(reg_vx1, (int *)(ADDR_PAR_SUM+k*8));
            }
            p_PARSUM[k*2] = p_QKVB[j*EMBED_DIM+i];
            vle32(reg_vx2, (int *)(ADDR_PAR_SUM));
            vsus_vv(reg_vx1,reg_vx2);
            vse32(reg_vx1, (int *)(ADDR_PAR_SUM));
            p_QKVSAVE[j*EMBED_DIM+i] = p_PARSUM[0];
        }
    }

    p_QKVW = (int8_t *)ADDR_KW;
    p_QKVB = (int8_t *)ADDR_KB;
    p_QKVSAVE = (int32_t *)ADDR_KSAVE;
    for(i=0; i<EMBED_DIM; i++){
        // trans one col
        for(k=0; k<FEAT_COL_NUM; k++){
                p_tempT[k] = p_QKVW[k*EMBED_DIM+i];
        }
        for(j=0; j<FEAT_ROW_NUM; j++){
            // calculate
            vse32(reg_vx0, (int *)(ADDR_PAR_SUM));
            for(k=0; k<6; k++){// 6 = 96/16 = FEAT_COL_NUM / valu element's num 
                vle8(reg_vx1, (int *)(ADDR_FEAT+j*FEAT_COL_NUM+k*16));
                vle8(reg_vx2, (int *)(ADDR_QKVTEMP+k*16));
                vmac_vv(reg_vx1, reg_vx1, reg_vx2);
                vse32(reg_vx1, (int *)(ADDR_PAR_SUM+k*8));
            }
            p_PARSUM[k*2] = p_QKVB[j*EMBED_DIM+i];
            vle32(reg_vx2, (int *)(ADDR_PAR_SUM));
            vsus_vv(reg_vx1,reg_vx2);
            vse32(reg_vx1, (int *)(ADDR_PAR_SUM));
            p_QKVSAVE[j*EMBED_DIM+i] = p_PARSUM[0];
        }
    }

    p_QKVW = (int8_t *)ADDR_VW;
    p_QKVB = (int8_t *)ADDR_VB;
    p_QKVSAVE = (int32_t *)ADDR_VSAVE;
    for(i=0; i<EMBED_DIM; i++){
        // trans one col
        for(k=0; k<FEAT_COL_NUM; k++){
                p_tempT[k] = p_QKVW[k*EMBED_DIM+i];
        }
        for(j=0; j<FEAT_ROW_NUM; j++){
            // calculate
            vse32(reg_vx0, (int *)(ADDR_PAR_SUM));
            for(k=0; k<6; k++){// 6 = 96/16 = FEAT_COL_NUM / valu element's num 
                vle8(reg_vx1, (int *)(ADDR_FEAT+j*FEAT_COL_NUM+k*16));
                vle8(reg_vx2, (int *)(ADDR_QKVTEMP+k*16));
                vmac_vv(reg_vx1, reg_vx1, reg_vx2);
                vse32(reg_vx1, (int *)(ADDR_PAR_SUM+k*8));
            }
            p_PARSUM[k*2] = p_QKVB[j*EMBED_DIM+i];
            vle32(reg_vx2, (int *)(ADDR_PAR_SUM));
            vsus_vv(reg_vx1,reg_vx2);
            vse32(reg_vx1, (int *)(ADDR_PAR_SUM));
            p_QKVSAVE[j*EMBED_DIM+i] = p_PARSUM[0];
        }
    }


    int32_t *p_QKTSAVE  = (int32_t *)ADDR_QKTSAVE;
    long h,qr,kr,head_split,qkr,vc;

    for(h=0; h<HEAD_NUM; h++){
        for(qr=0; qr<FEAT_ROW_NUM; qr++){
            for(kr=0; kr<FEAT_ROW_NUM; kr++){
                vse32(reg_vx0, (int *)(ADDR_PAR_SUM));
                for(head_split=0; head_split<2; head_split++){ //2 = 32/16 = head's EDIM / valu element's num 
                    vle32(reg_vx1,(int *)(ADDR_QSAVE + qr*EMBED_DIM*4 + h*32*4 + head_split*16*4));
                    vle32(reg_vx2,(int *)(ADDR_KSAVE + kr*EMBED_DIM*4 + h*32*4 + head_split*16*4));
                    vmac_vv(reg_vx1, reg_vx1, reg_vx2);
                    vse32(reg_vx1, (int *)(ADDR_PAR_SUM+head_split*8));
                }
                vle32(reg_vx2, (int *)(ADDR_PAR_SUM));
                vsus_vv(reg_vx1,reg_vx2);
                vse32(reg_vx1, (int *)(ADDR_PAR_SUM));
                p_QKTSAVE[qr*FEAT_ROW_NUM + kr] = p_PARSUM[0];
                
            }
        }
        // Fake Softmax
        int8_t max_number;
        int index;
        for (i=0; i<FEAT_ROW_NUM  ; i++) {
                max_number = 0;
                index = 0;
                for (j=0; j<FEAT_ROW_NUM; j++){
                    if(p_QKTSAVE[i*FEAT_ROW_NUM + j] > max_number){
                        max_number = p_QKTSAVE[i*FEAT_ROW_NUM + j];
                        index = j;
                    }
                }
                for (j=0; j<FEAT_ROW_NUM; j++){
                    if(j == index){
                        p_QKTSAVE[i*FEAT_ROW_NUM + j] = 1;
                        // printf("1\t ");
                    }else{
                        p_QKTSAVE[i*FEAT_ROW_NUM + j] = 0;
                        // printf("0\t ");
                    }
                }
                // printf("\n");
        }
        // print QKT
        // int32_t result;
        // printf("\nHEAD %d's QKT is\n", h);
        // for(int i=0; i<FEAT_ROW_NUM; i++){
        //     for(int j=0; j<FEAT_ROW_NUM; j++){
        //         result = p_QKTSAVE[i*FEAT_ROW_NUM + j];
        //         printf("%d\t ",result);
        //     }
        //     printf("\n");
        // }

        int32_t *p_VSAVE = (int32_t *)ADDR_VSAVE;
        int32_t *p_A     = (int32_t *)ADDR_QKTSAVE;
        int32_t *p_VT    = (int32_t *)ADDR_QSAVE;
        int32_t *p_ATemp = (int32_t *)ADDR_KSAVE;
        for(vc=0; vc<32; vc++){ // 32 = EDIM / HEAD_NUM
            vse32(reg_vx0, (int *)(ADDR_QSAVE));
            for(k=0; k<FEAT_ROW_NUM; k++){
                p_VT[k] = p_VSAVE[k*EMBED_DIM + h*32 + vc];
            }
            // for(k=0; k<16; k++){
            //     printf("%d\t",p_VT[k]);
            // }
            // printf("\n");
            vle32(reg_vx2, (int *)(ADDR_QSAVE));

            for(qkr=0; qkr<FEAT_ROW_NUM; qkr++){
                vse32(reg_vx0, (int *)(ADDR_KSAVE));
                for(k=0; k<FEAT_ROW_NUM; k++){
                    p_ATemp[k] = p_A[k + qkr*FEAT_ROW_NUM];
                }
                vse32(reg_vx0, (int *)(ADDR_PAR_SUM));
                vle32(reg_vx1, (int *)(ADDR_KSAVE));
                vmac_vv(reg_vx1, reg_vx1, reg_vx2);
                vsum_vv(reg_vx1,reg_vx1);
                vse32(reg_vx1, (int *)(ADDR_PAR_SUM));
                p_SAVE[h*32 + vc + qkr * EMBED_DIM]=p_PARSUM[0];
                
            }
        }
    }
    // //print SAVE
    // int32_t result;
    // for(int i=0; i<FEAT_ROW_NUM; i++){
    //     for(int j=0; j<EMBED_DIM; j++){
    //         result = p_SAVE[i*EMBED_DIM + j];
    //         printf("%d\t ",result);
    //     }
    //     printf("\n");
    // }
    return 0 ;
}
