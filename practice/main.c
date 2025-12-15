#include <stdio.h>
#include "matrix_op.h" // 引入您的函式庫標頭檔

int main() {
    // ------------------------------------
    // 1. 定義測試矩陣
    // ------------------------------------
    
    // 矩陣 A
    Matrix A = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0}
    };

    // 矩陣 B (用於加法和乘法)
    Matrix B = {
        {9.0, 8.0, 7.0},
        {6.0, 5.0, 4.0},
        {3.0, 2.0, 1.0}
    };

    // 矩陣 C (用於行列式和逆矩陣測試，確保行列式不為零)
    Matrix C = {
        {1.0, 0.0, 0.0},
        {0.0, 2.0, 0.0},
        {0.0, 0.0, 3.0}
    };
    
    // 定義結果矩陣
    Matrix Result;
    float det_C;

    printf("--- 3x3 Matrix Operations Test ---\n\n");

    // ------------------------------------
    // 2. 測試基本運算：加法 (Addition)
    // ------------------------------------
    printf("--- Test: Matrix Addition (A + B) ---\n");
    matrix_add(A, B, Result);
    printf("Matrix A:\n");
    print_matrix(A); 
    printf("Matrix B:\n");
    print_matrix(B);
    printf("Result (A + B):\n");
    print_matrix(Result);
    printf("--------------------------------------\n\n");


    // ------------------------------------
    // 3. 測試線性運算：轉置 (Transpose)
    // ------------------------------------
    printf("--- Test: Matrix Transpose (A^T) ---\n");
    matrix_transpose(A, Result); // 轉置矩陣
    printf("Matrix A:\n");
    print_matrix(A);
    printf("Result (A^T):\n");
    print_matrix(Result); 
    printf("--------------------------------------\n\n");


    // ------------------------------------
    // 4. 測試進階運算：行列式 (Determinant)
    // ------------------------------------
    printf("--- Test: Determinant (Det(C)) ---\n");
    det_C = matrix_determinant(C);
    printf("Matrix C:\n");
    print_matrix(C);
    printf("Determinant of C: %.2f\n", det_C); // C 的行列式應該是 1*2*3 = 6
    printf("--------------------------------------\n\n");


    // ------------------------------------
    // 5. 測試進階運算：逆矩陣 (Inverse)
    // ------------------------------------
    if (det_C != 0) {
        printf("--- Test: Inverse Matrix (C^-1) ---\n");
        matrix_inverse(C, Result);
        printf("Result (C^-1):\n");
        print_matrix(Result);
    } else {
        printf("Cannot calculate inverse: Determinant is zero.\n");
    }
    printf("--------------------------------------\n\n");

    return 0;
}