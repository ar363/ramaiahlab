#include <stdio.h>
#define NUM_STUDENTS 3

struct Student {
    char name[50];
    int marks[3]; 
    int totalMarks;
};

int main() {
    struct Student students[NUM_STUDENTS];
    int subjectTotal[NUM_STUDENTS] = {0};
    int i, j, x;

    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        students[i].totalMarks = 0;

        printf("Enter the marks\n");
        for (j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &x);
            students[i].marks[j] = x;
            students[i].totalMarks += x;
            subjectTotal[j] += x;
        }

    }

    printf("\nTotal Marks Student Wise:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%s: %d\n", students[i].name, students[i].totalMarks);
    }

    printf("\nTotal Marks Subject Wise:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d: %d\n", i + 1, subjectTotal[i]);
    }

}
