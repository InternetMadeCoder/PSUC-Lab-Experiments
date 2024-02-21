// To convert Fahrenheit to Celsius.
#include <stdio.h>

int main() {
    int tempF, tempC;
    printf("Enter temp in Fahrenheit: ");
    scanf("%d", &tempF);

    tempC = (tempF-32)*5/9;

    printf("%dF = %dC", tempF, tempC);
}