// To check the greater number in the given two numbers.
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    if(num1>num2) {
        printf("%d > %d", num1, num2);
    } else {
        printf("%d < %d", num1, num2);
    }
}