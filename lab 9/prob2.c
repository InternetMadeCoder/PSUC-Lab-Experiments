// program for searching for an element in the matrix and counting the number of occurrences of that element.

#include <stdio.h>

#define ROWS 3
#define COLS 3

int countOccurrences(int matrix[ROWS][COLS], int target) {
    int count = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == target) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target;

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int occurrences = countOccurrences(matrix, target);

    printf("Number of occurrences of %d in the matrix: %d\n", target, occurrences);
}
