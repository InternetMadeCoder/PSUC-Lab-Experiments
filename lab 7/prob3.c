/*
Print the pattern
5 5 5 5 5 
4 4 4 4
3 3 3 
2 2 
1
*/

#include <stdio.h>

int main() {
    for(int i=5; i>0; i--) {
        for(int j=i; j>0; j--) {
            printf("%d ", i);
        }
        printf("\n");
    }
}