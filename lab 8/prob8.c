// program to take an array of 10 elements. Split it into the middle and store the elements in two different arrays. 

#include <stdio.h>

int main() {
    int arr[10];
    
    printf("Enter 10 elements: ");
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    
    int subArr1[5], subArr2[5];
    
    printf("Sub Array 1 : ");
    for(int i=0; i<5; i++) {
        subArr1[i] = arr[i];
        printf("%d ", subArr1[i]);
    }
    printf("\n");
    
    printf("Sub Array 2: ");
    for(int i=5; i<10; i++) {
        subArr2[i] = arr[i];
        printf("%d ", subArr2[i]);
    }
}