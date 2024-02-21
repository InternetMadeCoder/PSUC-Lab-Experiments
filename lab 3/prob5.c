// Write a program to find out the distance between two points e.g. (x1, y1) and (x2, y2).

#include <stdio.h>

int main() {
    int x1, y1, x2, y2, distance;

    printf("(x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("(x2, y2): ");
    scanf("%d %d", &x2, &y2);   

    distance = ((x2-x1)^2 + (y2-y1)^2)^(1/2);

    printf("distance = %d", distance);
}