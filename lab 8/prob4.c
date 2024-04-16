// program to find the number of positive numbers, negative numbers, oddnumbers, even numbers, and the number of 0 of an array

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
    
    int positive_count=0, negative_count=0, odd_count=0, even_count=0, zero_count=0;
    
    for(int i=0; i<size; i++) {
        if (arr[i] > 0) {
            positive_count++;
        }
        if (arr[i] < 0) {
            negative_count++;
        }
        if (arr[i]%2 != 0) {
            odd_count++;
        }
        if (arr[i]%2 == 0) {
            even_count++;
        }
        if(arr[i] == 0) {
            zero_count++;
        }
    }
    printf("No. of positive numbers: %d \n", positive_count);
    printf("No. of negative numbers: %d \n", negative_count);
    printf("No. of odd numbers: %d \n", odd_count);
    printf("No. of even numbers: %d \n", even_count);
    printf("No. of zeroes: %d \n", zero_count);
}