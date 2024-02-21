// Write a program to interchange the values of two variables without using a third variable.

#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("num1 = ");
    scanf("%d", &num1);

    printf("num2 = ");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping : \nnum1 = %d \nnum2 = %d \n", num1, num2);
}