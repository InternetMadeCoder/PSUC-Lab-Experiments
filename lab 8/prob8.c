// program to take an array of 10 elements. Split it into the middle and store theelements in two different arrays

#include <stdio.h>

int main() {
    int originalArray[10];
    int leftArray[5];
    int rightArray[5];

    printf("Enter 10 elements of the array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &originalArray[i]);
    }

    for (int i = 0; i < 5; i++) {
        leftArray[i] = originalArray[i];
        rightArray[i] = originalArray[i + 5];
    }

    printf("\nLeft array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", leftArray[i]);
    }

    printf("\nRight array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", rightArray[i]);
    }
}