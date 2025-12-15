#include "matrix_op.h"
#include <stdio.h>
// 實作轉置矩陣
void matrix_transpose(Matrix A, Matrix Result) {
    int i,j;
    for ( i = 0; i < SIZE; i++) {
        for ( j = 0; j < SIZE; j++) {
            Result[j][i] = A[i][j];
        }
    }
}