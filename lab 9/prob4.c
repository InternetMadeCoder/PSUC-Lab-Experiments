// program to check if the given matrix is a magic square or not.

#include <stdio.h>

#define N 3 

int isMagicSquare(int mat[][N]) {
    int target_sum = 0;
    for (int j = 0; j < N; j++) {
        target_sum += mat[0][j];
    }

    for (int i = 0; i < N; i++) {
        int row_sum = 0, col_sum = 0;
        for (int j = 0; j < N; j++) {
            row_sum += mat[i][j];
            col_sum += mat[j][i];
        }
        if (row_sum != target_sum || col_sum != target_sum) {
            return 0; 
        }
    }

    int diag_sum = 0;
    for (int i = 0; i < N; i++) {
        diag_sum += mat[i][i];
    }
    if (diag_sum != target_sum) {
        return 0; 
    }

    diag_sum = 0;
    for (int i = 0; i < N; i++) {
        diag_sum += mat[i][N - 1 - i];
    }
    if (diag_sum != target_sum) {
        return 0; 
    }

    return 1; 
}

int main() {
    int matrix[N][N] = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};

    if (isMagicSquare(matrix)) {
        printf("The given matrix is a magic square.\n");
    } else {
        printf("The given matrix is not a magic square.\n");
    }
}