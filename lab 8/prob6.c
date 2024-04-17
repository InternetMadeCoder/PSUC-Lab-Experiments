// Write a program to check whether an array is sorted or not.

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
    
    for(int i=0; i<size-1; i++) {
        if(arr[i] > arr[i+1]) {
            printf("The array is NOT sorted.");
            return 1;
        }
    }
    printf("The array is sorted.");
}