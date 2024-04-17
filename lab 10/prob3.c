// program to concatenate/length/copy two strings using the library function.

#include <stdio.h>
#include <string.h>

int main() {
    char firstName[] = "Gayathri";
    char lastName[] = "Ravindran";

    // concatenate
    printf("%s \n", strcat(firstName, lastName));

    // length
    int length = strlen(firstName);
    printf("length = %d \n", length);

    // copy
    printf("%s \n", strcpy(firstName, lastName));
}