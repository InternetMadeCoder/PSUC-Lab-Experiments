// program to find the largest and smallest element in an array.

#include <stdio.h> 

int main() {
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size], largest, smallest;

    printf("Enter elements of array: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0], largest = arr[0];

    for(int i=0; i<size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        } 
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Smallest element: %d \n", smallest);
    printf("Largest element: %d \n", largest);
}