#ifndef MATRIX_OP_H
#define MATRIX_OP_H
#define SIZE 3

void vAdd(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]);
void vSub(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]);
void vMultiple(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]);
void vElement_wise_Multiple(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]);
void vTransport(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]);

#endif