// Write a program to print the Fibonacci number.
// Hint: (Fibonacci series is 0, 1, 1, 2, 3, 5, 8,)

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    }

    int first = 0, second = 1, next;

    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d, ", first);

        next = first + second;
        first = second;
        second = next;
    }
}
