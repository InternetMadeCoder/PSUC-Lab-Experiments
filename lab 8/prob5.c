// Write a program to reverse an array with an auxiliary array

#include <stdio.h>

int main() {
    int size;
    
    printf("Enter size of an array: ");
    scanf("%d", &size);
    
    int arr1[size];
    
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr1[i]);
    }
    
    int arr2[size];
    for(int i=0; i<size; i++) {
        arr2[i] = arr1[size-i-1];
    }
    
    printf("reversed array: ");
    for(int i=0; i<size; i++) {
        printf("%d ", arr2[i]);
    }
}