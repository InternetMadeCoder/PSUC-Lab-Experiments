// Write a program for converting distance in mm to cm, inch, feet (1 cm =10mm,1inch=2.5cm, 1 feet =12 inches).

#include <stdio.h>

int main() {
    int mm, cm, inch, feet;

    printf("Enter distance in mm: ");
    scanf("%d", &mm);

    cm = mm/10;
    inch = cm/2.5;
    feet = inch/12;

    printf("%dmm = %dcm = %dfeet", mm, cm, inch, feet);
}