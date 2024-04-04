// program to find the largest and smallest element in an array.

#include <stdio.h>

int main() {
    int arr[] = {5, 8, 3, 2, 9, 1, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0], max = arr[0];
    
    for(int i = 1; i < size; i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    
    printf("The smallest element in the array is: %d\n", min);
    printf("The largest element in the array is: %d\n", max);
}