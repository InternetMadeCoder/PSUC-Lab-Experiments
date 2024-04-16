// program to print the subarray that lies between the two indexes

#include <stdio.h>

int main() {
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size], index1, index2;
    
    printf("Enter elements of array: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter two indexes: ");
    scanf("%d %d", &index1, &index2);
    
    printf("Subarray between index %d and %d: ", index1, index2);
    for(int i=index1; i<=index2; i++) {
        printf("%d ", arr[i]);
    }
}