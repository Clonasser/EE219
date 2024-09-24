#include "trap.h"
#include "model.h"

#define ADDR_A      ADDR_FEAT
#define ADDR_B      ADDR_QW
#define ADDR_C      ADDR_QB


void qkvGenerate(int8_t *p_feature, int8_t *p_weight, int8_t *p_bias, int32_t *p_save){
    int i,j,k ;
    // int8_t data ;
    // int8_t weight ;
    int32_t result;
    for (i=0; i<FEAT_ROW_NUM  ; i++) {
        for (k=0; k<EMBED_DIM; k++){
            result = p_bias[i*FEAT_COL_NUM+k];
            for(j=0; j<FEAT_COL_NUM; j++){
            //    data = p_feature[i*(FEAT_COL_NUM) + j]; 
            //    weight = p_weight[j*(EMBED_DIM) + k];
            //    result += data * weight;
               result += p_feature[i*(FEAT_COL_NUM) + j] * p_weight[j*(EMBED_DIM) + k];
            }
            // result += p_bias[i*FEAT_COL_NUM+k];
            result = ((result >> 7) +1) >> 1;
            if (result > 127){
                result = 127;
            }else if(result < -128){
                result = -128;
            }else{
                result = result;
            }
            // printf("%d\t ",result);
            p_save[i*EMBED_DIM+k] = result;
        }
        // printf("\n");
    }
}

int main() {
    // int i,j,k ;
    // int8_t *p_A = (int8_t *)ADDR_A ;
    // int8_t *p_B = (int8_t *)ADDR_B ;
    // int8_t *p_C = (int8_t *)ADDR_C ;
    int32_t *p_QSAVE = (int32_t *)ADDR_FREE;
    int32_t *p_KSAVE = (int32_t *)ADDR_32B_T1;
    int32_t *p_VSAVE = (int32_t *)ADDR_32B_T2;
    int32_t *p_QKTSAVE = (int32_t *)ADDR_32B_T3;
    int32_t *p_SAVE = (int32_t *)ADDR_SAVE;
    // int8_t *p_C = (int8_t *)ADDR_C ;
    // int8_t *p_B = (int8_t *)ADDR_B ;
    // int32_t *p_C = (int32_t *)ADDR_C ;

    // Calculate QKV
    qkvGenerate((int8_t *)ADDR_FEAT, (int8_t *)ADDR_QW, (int8_t *)ADDR_QB, p_QSAVE);
    qkvGenerate((int8_t *)ADDR_FEAT, (int8_t *)ADDR_KW, (int8_t *)ADDR_KB, p_KSAVE);
    qkvGenerate((int8_t *)ADDR_FEAT, (int8_t *)ADDR_VW, (int8_t *)ADDR_VB, p_VSAVE);
    // Calculate QKT
    int i,j,k,h ;
    int32_t result;

    // print QSAVE
    // printf("QSAVE is\n");
    // for(i=0; i<FEAT_ROW_NUM; i++){
    //     for(j=0; j<FEAT_COL_NUM; j++){
    //         result = p_VSAVE[i*FEAT_COL_NUM + j];
    //         printf("%d\t ",result);
    //     }
    //     printf("\n");
    // }

    for(h=0; h<HEAD_NUM; h++){
        // prinetf("H at Head %d is:\n",h);
        for (i=0; i<FEAT_ROW_NUM  ; i++) {
            for (k=0; k<FEAT_ROW_NUM; k++){
                result = 0;
                for(j=0; j<HEAD_LEN; j++){
                    //    data = p_feature[i*(FEAT_COL_NUM) + j]; 
                    //    weight = p_weight[j*(EMBED_DIM) + k];
                    //    result += data * weight;
                    result += p_QSAVE[i*(EMBED_DIM) + h*HEAD_LEN +j] * p_KSAVE[k*(EMBED_DIM) + h*HEAD_LEN +j];
                }
                result = ((result >> 7) +1) >> 1;
                if (result > 127){
                    result = 127;
                }else if(result < -128){
                    result = -128;
                }else{
                    result = result;
                }
                // printf("%d\t ",result);
                p_QKTSAVE[i*FEAT_ROW_NUM + k] = result;
            }
            // printf("\n");
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

        // A*v
        for (i=0; i<FEAT_ROW_NUM  ; i++) {
            for (k=0; k<HEAD_LEN; k++){
                result = 0;
                for(j=0; j<FEAT_ROW_NUM; j++){
                    //    data = p_feature[i*(FEAT_COL_NUM) + j]; 
                    //    weight = p_weight[j*(EMBED_DIM) + k];
                    //    result += data * weight;
                    result += p_QKTSAVE[i*(FEAT_ROW_NUM) + j] * p_VSAVE[j*(EMBED_DIM) + h*HEAD_LEN + k];
                }
                // result += p_bias[i*FEAT_COL_NUM+k];
                if (result > 127){
                    result = 127;
                }else if(result < -128){
                    result = -128;
                }else{
                    result = result;
                }
                // printf("%d\t ",result);
                // p_save[i*EMBED_DIM+k] = result;
                p_SAVE[i*EMBED_DIM + h*HEAD_LEN + k] = result;
            }
        // printf("\n");
        }
    }
    
    // printf("Result: \n");
    // for(i=0; i<FEAT_ROW_NUM; i++){
    //     for(j=0; j<EMBED_DIM; j++){
    //         printf("%d\t", p_SAVE[i*EMBED_DIM + j]);
    //     }
    //     printf("\n");
    // }
    
    
    // Access-Matrix-Method-1 (recommended)
    // int8_t data ;
    // int8_t weight ;
    // int32_t result;
    // for (i=0; i<FEAT_ROW_NUM  ; i++) {
    //     for (k=0; k<EMBED_DIM; k++){
    //         result = 0;
    //         for(j=0; j<FEAT_COL_NUM; j++){
    //            data = p_A[i*(FEAT_COL_NUM) + j]; 
    //            weight = p_B[j*(EMBED_DIM) + k];
    //            result += data * weight;
    //         }
    //         result += p_C[i*FEAT_COL_NUM+k];
    //         result = ((result >> 7) +1) >> 1;
    //         if (result > 127){
    //             result = 127;
    //         }else if(result < -128){
    //             result = -128;
    //         }else{
    //             result = result;
    //         }
    //         printf("%d\t ",result);
    //         p_SAVE[i*FEAT_ROW_NUM+k] = result;
    //     }
    //     printf("\n");
    // }
    

    // // Access-Matrix-Method-2
    // for (i=0; i<16; i++) {
    //     int8_t data = *(p_B+i);
    //     printf("%d\t",data);
    // }
    // printf("\n");

    // // Write Data Back to Memory
    // int8_t data_A, data_B;
    // int32_t data_C ;
    // for( i=0; i<16;  i++ ){
    //     data_A = i ;
    //     data_B = i+1 ;
    //     data_C = data_A * data_B ;
    //     p_C[i] = data_C ;
    // }

    // // Re-Read Data From Memory
    // for (i=0; i<16; i++) {
    //     int32_t data = *(p_C+i);
    //     printf("%d\t",data);
    // }

    return 0;
}
