// program to take 3 student marks in 5 subjects. Print the total marks of eachstudent and the average marks of each subject.

#include <stdio.h>

#define NUM_STUDENTS 3
#define NUM_SUBJECTS 5

int main() {
    int marks[NUM_STUDENTS][NUM_SUBJECTS];
    int total[NUM_STUDENTS] = {0};
    float subject_avg[NUM_SUBJECTS] = {0};

    printf("Enter marks for %d students in %d subjects:\n", NUM_STUDENTS, NUM_SUBJECTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter marks for student %d: ", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
    }

    for (int i = 0; i < NUM_SUBJECTS; i++) {
        float sum = 0;
        for (int j = 0; j < NUM_STUDENTS; j++) {
            sum += marks[j][i];
        }
        subject_avg[i] = sum / NUM_STUDENTS;
    }

    printf("\nTotal marks of each student:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d: %d\n", i + 1, total[i]);
    }

    printf("\nAverage marks of each subject:\n");
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Subject %d: %.2f\n", i + 1, subject_avg[i]);
    }
}