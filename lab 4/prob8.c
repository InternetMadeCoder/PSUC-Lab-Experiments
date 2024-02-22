// Write a program to check whether the given character is a vowel, consonant, or digit.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a vowel, consonant, or digit.\n", ch);
    }
}