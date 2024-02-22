// Write a program to find the roots of a quadratic equation.

#include <stdio.h>

int main() {
    int a, b, c, root1, root2;

    // ax^2 + bx + c
    printf("Enter a quadratic equation: ");
    scanf("%dx^2 + %dx + %d", &a, &b, &c);

    root1 = (-b + (b^2-4*a*c)^(1/2)/(2*a));
    root2 = (-b - (b^2-4*a*c)^(1/2)/(2*a));

    printf("(%d, %d) are the roots of the equation.", root1, root2);
}