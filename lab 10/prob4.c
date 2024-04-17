// program to count the number of words in a sentence

#include <stdio.h>

int main() {
    char sentence[1000];
    int count=1;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for(int i=0; sentence[i]!='\0'; i++) {
        if(sentence[i] == ' ') {
            count++;
        }
    }

    printf("number of words in the sentence = %d", count);
}