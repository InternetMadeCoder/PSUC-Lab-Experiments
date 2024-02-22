// Write a program to take two numbers as an input and find whether one number is amultiple of the other or not.

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1%num2 == 0) {
        printf("%d is a multiple of %d \n", num1, num2);
    } else {
        printf("%d is NOT a multiple of %d \n", num1, num2);
    }

    if(num2%num1 == 0) {
        printf("%d is a multiple of %d \n", num2, num1);
    } else {
        printf("%d is NOT a multiple of %d \n", num2, num1);
    }
}