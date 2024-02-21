// Write a program to evaluate the area of the circle Area = Pi * R^2.

#include <stdio.h>

int main() {
    int pi = 3.14;
    int area, r;

    printf("Enter radius: ");
    scanf("%d", &r);

    area = pi * r^2;

    printf("area = %d", area);
}