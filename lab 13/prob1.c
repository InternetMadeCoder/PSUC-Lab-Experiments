/*
program to define a structure personal that would contain the person’s name, 
date of joining, and salary. Using this structure write a program to read this 
information for one person from the keyboard and print the same on the screen.
*/

#include <stdio.h>
#include <string.h>

struct personal {
    char name[100];
    char doj[100];
    int salary;
};

int main() {
    struct personal person1;
    
    printf("Enter details \n");
    printf("Enter name: ");
    fgets(person1.name, sizeof(person1.name), stdin);
    printf("Enter date of joining: ");
    fgets(person1.doj, sizeof(person1.doj), stdin);
    printf("Enter salary: ");
    scanf("%d", &person1.salary);
    
    printf("\nDetails: \n");
    puts(person1.name);
    puts(person1.doj);
    printf("%d", person1.salary);
}