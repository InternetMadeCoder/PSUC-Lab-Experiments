/*Write a program to design a calculator that performs addition, 
subtraction, minus, and division operation. This program inputs 
two operands and an operator and then displays the calculated 
results.*/

#include <stdio.h>

int main() {
    int operand1, operand2, ans;
    char operator;

    printf("Enter two operands: ");
    scanf("%d %d", &operand1, &operand2);

    printf("Enter operator: ");
    getchar();
    scanf("%c", &operator);

    switch(operator) {
        case '+':
            ans = operand1 + operand2;
            break;

        case '-':
            ans = operand1 - operand2;
            break;

        case '*':
            ans = operand1 * operand2;
            break;

        case '/':
            ans = operand1 / operand2;
            break;

        default:
            printf("Invalid operator.");
            break;
    }
    printf("%d %c %d = %d", operand1, operator, operand2, ans);
}