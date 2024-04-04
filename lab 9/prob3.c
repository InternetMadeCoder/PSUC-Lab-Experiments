// program to multiply two matrices.

#include <stdio.h>

#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3

void displayMatrix(int mat[][COL2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROW1][COL1] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[ROW2][COL2] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int result[ROW1][COL2];

    if (COL1 != ROW2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COL1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    displayMatrix(result, ROW1, COL2);
}