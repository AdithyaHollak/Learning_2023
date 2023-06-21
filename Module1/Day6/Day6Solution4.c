#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int marks;
    char name[20];
} Student;

void sortStructuresDescending(Student* students, int numStudents) {
    int i, j;
    Student temp;

    for (i = 0; i < numStudents - 1; i++) {
        for (j = 0; j < numStudents - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); 

    Student* students = (Student*)malloc(numStudents * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        getchar();
    }
    sortStructuresDescending(students, numStudents);

    printf("Sorted student details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Name: %sMarks: %d\n", students[i].name, students[i].marks);
    }

    free(students);

    return 0;
}

