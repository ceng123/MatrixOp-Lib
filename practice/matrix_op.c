#include "matrix_op.h"
#include<stdio.h>
#define SIZE 3
void vAdd(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    int i,j;
    for (i = 0; i < SIZE; i++) {
        for ( j = 0; j < SIZE; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
void vSub(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    int i,j;
    for (i = 0; i < SIZE; i++) {
        for ( j = 0; j < SIZE; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}
void vMultiple(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    int i,j,k;
    for (i = 0; i < SIZE; i++) {
        for ( j = 0; j < SIZE; j++) {
            for(k=0; k < SIZE; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void vTransport(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    int i,j,k;
    for (i = 0; i < SIZE; i++) {
        for ( j = 0; j < SIZE; j++) {
            C[j][i] = A[i][j];
        }
    }
}