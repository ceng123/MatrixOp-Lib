#include "matrix_op.h"

// 實作轉置矩陣
void matrix_transpose(Matrix A, Matrix Result) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            Result[j][i] = A[i][j];
        }
    }
}