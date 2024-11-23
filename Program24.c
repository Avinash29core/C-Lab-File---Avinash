//Program to store and display information of a student using structure
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
int main () {
    struct Student student;
    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &student.marks);
    char *newline = student.name;
    while (*newline) {
        if (*newline == '\n') {
            *newline = '\0';
            break;
        }
        newline++;
    }
    printf("\n---STUDENT INFORMATION---\n");
    printf("Name: %s\n",student.name);
    printf("Roll number: %d\n",student.rollNumber);
    printf("Marks: %f\n",student.marks);
    return 0;
}