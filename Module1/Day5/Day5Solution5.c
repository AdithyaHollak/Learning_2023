#include <stdio.h>
#include<string.h>


struct Student {
    char name[50];
    int age;
    float marks;
};

void swapFields(struct Student* s1, struct Student* s2) {
    // Swap the name field
    char tempName[50];
    strcpy(tempName, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, tempName);

    // Swap the age field
    int tempAge = s1->age;
    s1->age = s2->age;
    s2->age = tempAge;

    // Swap the marks field
    float tempMarks = s1->marks;
    s1->marks = s2->marks;
    s2->marks = tempMarks;
}

int main() {
    struct Student student1, student2;

    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Marks: ");
    scanf("%f", &student1.marks);

    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Marks: ");
    scanf("%f", &student2.marks);

    printf("\nBefore swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Marks: %.2f\n", student2.marks);

    // Swap the fields using pointers
    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}
