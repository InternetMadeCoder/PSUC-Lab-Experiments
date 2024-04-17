// program to find the substring of a given string

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int index1, index2;
    printf("Enter two indices: ");
    scanf("%d %d", &index1, &index2);

    char substr[index2-index1+1];

    int j = 0;
    for(int i=index1; i<=index2; i++) {
        substr[j] = str[i];
        j++;
    }
    substr[index2-index1+1] = '\0';

    printf("Substring: %s", substr);
}