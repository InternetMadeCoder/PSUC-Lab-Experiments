// Write a program to take N as input and print the odd numbers in descending order.

#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    for(int i=1; i<=N; i++) {
        if(i%2 != 0) {
            printf("%d ", i);
        } else {
            continue;
        }
    }
}