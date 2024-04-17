// program to generate the multiplication table for n numbers up to k terms (nested loops). 

#include <stdio.h>

int main() {
    int n, k;
    
    printf("Enter n and k : ");
    scanf("%d %d", &n, &k);
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=k; j++) {
            printf("%d x %d = %d \n", i, j, i*j);
        }
        printf("\n");
    }
}