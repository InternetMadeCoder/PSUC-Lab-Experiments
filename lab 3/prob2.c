// Write a program to find the sum of the digits of a four-digit number (ex.1234 sum=10)(without using a loop).

#include <stdio.h>

int main() {
    int num, a, b, c, d;
    printf("Enter a four digit number : ");
    scanf("%d", &num);

    a = num%10;
    b = (num/10)%10;
    c = (num/100)%10;
    d = (num/1000)%10;
    int sum = a + b + c + d;

    printf("sum = %d", sum);
}