// program to find the string length of a string without using the predefined function.

#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int count=0;

    for(int i=0; str[i]!='\0'; i++) {
        count++;
    }

    printf("Size of string: %d", count-1);
}