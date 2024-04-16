// program to find the sum of odd index numbers in an array.

#include <stdio.h>

int main() {
    int size, sum;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
        
        if(i%2 != 0) {
            sum += arr[i];
        }
    }
    printf("Sum of odd index numbers: %d", sum);
}