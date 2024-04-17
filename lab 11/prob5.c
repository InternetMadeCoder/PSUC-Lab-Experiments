/*Write a function to generate the n
th Fibonacci term using recursion. Print first N Fibonacci
terms using this function. Hint: (Fibonacci series is 0, 1, 1, 2, 3, 5, 8,)*/

#include <stdio.h>

int fibonacci(int N); 

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    for(int i=1; i<=N; i++) {
        printf("%d ", fibonacci(i));
    }
}

int fibonacci(int N) {
    if(N == 1) {
        return 0;
    } 
    else if (N == 2) {
        return 1;
    }
    else if(N>2) {
        return fibonacci(N-1)+fibonacci(N-2);
    }
}