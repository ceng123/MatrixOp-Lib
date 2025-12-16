#include "matrix_op.h"
#include <stdlib.h>
#include "stdio.h"
void* vAdd(int **A,int size1, int **B,int size2,int **C, int size)
{
    int i = 0;
    int j=0;
    for (i = 0; i < size1; i++){
       for(j=0;j<size2;j++){
        C[i][j]=A[i][j]+B[i][j];
       } 
    }
for (i = 0; i < size1; i++){
       for(j=0;j<size2;j++){
       
        printf("%d",C[i][j]);
        printf("\t");
       } 
       printf("\n");
    }
}
