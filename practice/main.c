#include <stdio.h>
#include "matrix_op.h"

int main()
{
    int A[3][3] = {{1, 2, 3},{2, 4, 6},{8, 2, 3}};
    int B[3][3] = {{1, 2, 3},{5, 6, 7},{8, 9, 10}};

    int C[100][100];
    vAdd(A,3,B,3,C,3);
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        printf("%d ", C[i]);
    }

    return 0;
}