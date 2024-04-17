// program to determine the length of a character string using a pointer.

#include <stdio.h>

int main() {
    char str[100]; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *ptr = str;
    int length = 0;

    while(*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Length: %d", length-1);
}