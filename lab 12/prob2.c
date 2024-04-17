// program to find out the greatest and the smallest among the three numbers using pointers.

#include <stdio.h>

int main() {
    int num1, num2, num3;
    int *ptr1, *ptr2, *ptr3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    int smallest=*ptr1, largest=*ptr1;

    if(*ptr2 > largest) {
        largest = *ptr2;
    }
    if(*ptr3 > largest) {
        largest = *ptr3;
    }

    if(*ptr2 < smallest) {
        smallest = *ptr2;
    }
    if(*ptr3 < smallest) {
        smallest = *ptr3;
    }

    printf("Smallest: %d \n", smallest);
    printf("Largest: %d", largest);
}