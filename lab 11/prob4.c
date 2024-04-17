/*Write a program to check whether the given number is prime or not. Using this function
generates first n prime numbers using the above function.*/

#include <stdio.h>

int isPrime(int N);

int isPrime(int N) {
    for(int i=2; i<N; i++) {
        if(N%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    for(int i=2; i<=N; i++) {
        isPrime(i) ? printf("%d ", i) : 0;
    }
}