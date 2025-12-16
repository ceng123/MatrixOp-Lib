#include <stdio.h>
#include "matrix_op.h"

int main() {
    int A[3][3] = {{1, 2, 3}, {2, 4, 6}, {8, 2, 3}};
    int B[3][3] = {{1, 2, 3}, {5, 6, 7}, {8, 9, 10}};
    int C[3][3]; // 修正為 3x3

    vAdd(A, B, C, 3);

    printf("Result of Matrix Addition:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}