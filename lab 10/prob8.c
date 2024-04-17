// program to check if the given string is a palindrome or not.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }
    
    char reverseStr[length];

    for(int i=0; str[i]!='\0'; i++) {
        reverseStr[i] = str[length-2-i];
    }
    reverseStr[length-1] = '\0';

    for(int i=0; str[i]!='\0'; i++) {
        if(str[i] != reverseStr[i]) {
            printf("%s is NOT a palindrome.", str);
            return 0;
        }
    }
    printf("%s is a palindrome.", str);
}