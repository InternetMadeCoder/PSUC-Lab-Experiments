// program to change all lower-case letters into upper case in a sentence.

#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100]; 
    
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);
    
    for(int i=0; sentence[i]!='\0'; i++) {
        if(islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        }
    }
    puts(sentence);
}