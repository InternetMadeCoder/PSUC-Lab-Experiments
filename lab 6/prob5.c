/*Write a program to reverse a given number
Ex: 1234 reverse=
4*10^3 + 3 * 10^2 + 2 * 10^1 + 1 * 10^0 =4321*/

#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number: %d", reversedNumber);
}