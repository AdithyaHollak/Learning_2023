#include <stdio.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

void initializeStudents(Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}
void displayStudents(Student* students, int numStudents) {
     for (int i = 0; i < numStudents; i++) {
        printf("Rollno: %d\n", students[i].rollno);
        printf("Name:%s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int numStudents ;
    printf("Enter the number of students:\n");
    scanf("%d",&numStudents);
    Student students[numStudents];


    initializeStudents(students, numStudents);
    displayStudents(students, numStudents);

    return 0;
}
