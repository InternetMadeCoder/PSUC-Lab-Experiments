// program to compute the sum of all elements stored in an array using a pointer

#include <stdio.h>

int main() {
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of array: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    int sum = 0;

    for(int i=0; i<size; i++) {
        sum += ptr[i];
    }

    printf("Sum: %d", sum);
}