// To check whether the given number is prime or not. 
#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}