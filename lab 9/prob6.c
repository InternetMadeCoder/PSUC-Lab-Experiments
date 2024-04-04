// program to find the trace and norm of a given square matrix.

#include <stdio.h>
#include <math.h>

#define N 3 

double trace(int mat[][N]) {
    double trace_sum = 0.0;
    for (int i = 0; i < N; i++) {
        trace_sum += mat[i][i];
    }
    return trace_sum;
}

double norm(int mat[][N]) {
    double norm_sum = 0.0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            norm_sum += mat[i][j] * mat[i][j];
        }
    }
    return sqrt(norm_sum);
}

int main() {
    int matrix[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    double trace_value = trace(matrix);
    double norm_value = norm(matrix);

    printf("Trace of the matrix: %.2f\n", trace_value);
    printf("Norm of the matrix: %.2f\n", norm_value);
}