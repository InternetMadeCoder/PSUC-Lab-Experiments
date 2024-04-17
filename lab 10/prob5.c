// Write a program to reverse a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char newStr[100];
    int length = strlen(str);

    for(int i=0; str[i]!='\0'; i++) {
        newStr[i] = str[length-i-2];
    }
    newStr[length - 1] = '\0';

    printf("Reversed string: %s", newStr);
}