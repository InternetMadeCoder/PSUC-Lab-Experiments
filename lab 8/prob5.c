// program to reverse an array with an auxiliary array

#include <stdio.h>

void reverseArray(int arr[], int size) {
    int aux[size]; 
    
    for (int i = 0; i < size; i++) {
        aux[i] = arr[size - 1 - i];
    }
    
    for (int i = 0; i < size; i++) {
        arr[i] = aux[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    reverseArray(arr, size);
    
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
