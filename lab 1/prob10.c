// To calculate area of the given rectangle.
#include <stdio.h>

int main() {
    int length, breadth, area;
    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;

    printf("area = %d", area);
}