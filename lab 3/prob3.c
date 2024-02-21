// Write a program to convert the temperature given in Fahrenheit to Centigrade andCentigrade to Fahrenheit. Hint: C=5/9(F-32)).

#include <stdio.h>

int main() {
    int tempC, tempF, F, C;
    
    printf("Enter temp in Fahrenheit: ");
    scanf("%d", &tempF);

    printf("Enter temp in Celsius: ");
    scanf("%d", &tempC);

    C = (tempF-32)*5/9;
    F = (tempC * 9/5)+32;

    printf("%dF = %dC \n", tempF, C);
    printf("%dC = %dF \n", tempC, F);
}