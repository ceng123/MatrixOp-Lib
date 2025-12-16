#include "matrix_op.h"
#include<stdio.h>
#define SIZE 3
void vAdd(int *A[SIZE][SIZE], int B[SIZE][SIZE], int *C[SIZE][SIZE]) {
    int i,j;
    for (i = 0; i < SIZE; i++) {
        for ( j = 0; j < SIZE; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}