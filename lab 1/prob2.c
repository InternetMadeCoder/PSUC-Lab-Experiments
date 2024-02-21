// To divide two numbers.
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first num: ");
    scanf("%d", &num1);

    printf("Enter second num: ");
    scanf("%d", &num2);

    int ans = num1 / num2;
    printf("%d / %d = %d", num1, num2, ans);
}