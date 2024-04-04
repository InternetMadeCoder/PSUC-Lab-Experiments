// program to find whether a given matrix is symmetric or not.

#include <stdio.h>

#define N 3 

int isSymmetric(int mat[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] != mat[j][i]) {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    int matrix[N][N] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};

    if (isSymmetric(matrix)) {
        printf("The given matrix is symmetric.\n");
    } else {
        printf("The given matrix is not symmetric.\n");
    }
}