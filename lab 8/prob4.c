// find the number of positive numbers, negative numbers, oddnumbers, even numbers, and the number of 0 of an array.

#include <stdio.h>

int main() {
    int arr[] = {5, -8, 3, 0, 2, -9, 1, 10, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int positive_count = 0, negative_count = 0, odd_count = 0, even_count = 0, zero_count = 0;
    
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0)
            positive_count++;
        else if(arr[i] < 0)
            negative_count++;
        
        if(arr[i] % 2 == 0 && arr[i] != 0)
            even_count++;
        else if(arr[i] % 2 != 0)
            odd_count++;
        
        if(arr[i] == 0)
            zero_count++;
    }
    
    printf("Number of positive numbers: %d\n", positive_count);
    printf("Number of negative numbers: %d\n", negative_count);
    printf("Number of odd numbers: %d\n", odd_count);
    printf("Number of even numbers: %d\n", even_count);
    printf("Number of zeros: %d\n", zero_count);
}