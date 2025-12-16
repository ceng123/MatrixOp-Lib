#include <stdio.h>
#include "matrix_op.h"
#define SIZE 3
int main() {
    // 使用 SIZE 標籤
    int A[SIZE][SIZE] = {{1, 2, 3}, {2, 4, 6}, {8, 2, 3}};
    int B[SIZE][SIZE] = {{1, 2, 3}, {5, 6, 7}, {8, 9, 10}};
    int C[SIZE][SIZE]; 
    int i,j;
    vAdd(A, B, C);

    printf("Result of Matrix Addition:\n");
    for ( i = 0; i < SIZE; i++) {
        for ( j = 0; j < SIZE; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}