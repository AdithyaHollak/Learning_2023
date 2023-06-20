#include <stdio.h>
#include <stdlib.h>
#define max 100

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    int n;
    char temp;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

 
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Enter name: ");
        scanf("%c",&temp); // temp statement to clear buffer
    	fgets(students[i].name,30,stdin);

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Data:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}
