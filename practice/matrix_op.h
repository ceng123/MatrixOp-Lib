#ifndef MATRIX_OP_H
#define MATRIX_OP_H

#define SIZE 3 // 定義矩陣維度為 3x3 [cite: 8, 28]

// 建議的矩陣資料型態 (使用二維陣列)
typedef float Matrix[SIZE][SIZE];

// 函式宣告 (Functions Declare) [cite: 29]
// --- 基本運算 (Basic Operations) ---
void matrix_add(Matrix A, Matrix B, Matrix Result);
void matrix_subtract(Matrix A, Matrix B, Matrix Result);

// --- 線性代數運算 (Linear Operations) ---
void matrix_multiply(Matrix A, Matrix B, Matrix Result); // 標準矩陣乘法 [cite: 12, 37]
void matrix_elementwise_multiply(Matrix A, Matrix B, Matrix Result); // 元素乘法 (Hadamard product) [cite: 15, 34, 36]
void matrix_transpose(Matrix A, Matrix Result); // 轉置矩陣 [cite: 14, 38, 39]

// --- 進階運算 (Advanced Operations) ---
float matrix_determinant(Matrix A); // 計算行列式 [cite: 17, 43]
void matrix_adjoint(Matrix A, Matrix Result); // 計算伴隨矩陣 [cite: 18, 51]
void matrix_inverse(Matrix A, Matrix Result); // 計算逆矩陣 [cite: 19, 65, 66]

// 輔助函式 (Helper Functions)
void print_matrix(Matrix M);
void initialize_matrix(Matrix M, float values[SIZE*SIZE]);

#endif