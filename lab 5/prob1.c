// Write a program to program to calculate an area of a circle, a rectangle, or a triangle depending on the user’s choice.

#include <stdio.h>

int main() {
    int ch, area, radius, length, breadth, a, b, c;
    int pi = 3.14;
    printf("Calculate the area of 1. Circle \n2. Rectangle \n3. Triangle \nEnter your choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("Enter the radius: ");
            scanf("%d", &radius);
            area = pi * radius^2;
            break;

        case 2:
            printf("Enter length and breadth: ");
            scanf("%d %d", &length, &breadth);
            area = length * breadth;
            break;

        case 3:
            printf("Enter the sides of the triangle: ");
            scanf("%d %d %d", &a, &b, &c);

            if((a+b)>c && (b+c)>a && (a+c)>b) {
                area = (a+b+c)/2;
            } else {
                printf("Invalid sides.");
            }
            break;

        default:
            printf("Invalid choice.");
    }
    printf("area = %d", area);
}