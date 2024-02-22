// Write a program to check whether the given number is odd or even.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    if(num%2==0) {
        printf("%d is EVEN.", num);
    } else {
        printf("%d is ODD.", num);
    }
}