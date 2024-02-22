/* Write a program that returns a letter grade based on a quiz score. The input will be theinteger score from a ten-point quiz.
a. The letter grades are assigned by:
b. 9-10“A”7-8“B”5-6“C”3-4“D”<3“F” */

#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter quiz score: ");
    scanf("%d", &marks);

    if(marks==9 || marks==10) {
        grade = 'A';
    } else if(marks==8 || marks==7) {
        grade = 'B';
    } else if(marks==6 || marks==5) {
        grade = 'C';
    } else if(marks==3 || marks==4) {
        grade = 'D';
    } else if(marks<3) {
        grade = 'F';
    }
    printf("Grade = %c", grade);
}