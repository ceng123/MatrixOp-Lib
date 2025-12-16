#include <stdio.h>
#include "matrix_op.h"

int main()
{
    int A[4] = {1, 2, 3, 4};
    int B[4] = {6, -5, -4, 3};

    int *C;
    C = vAdd(A, B, 4);
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        printf("%d ", C[i]);
    }

    return 0;
}