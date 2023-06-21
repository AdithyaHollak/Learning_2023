#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    int age;
} Student;

int binarySearch(Student arr[], int low, int high, const char *target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        int cmp = strcmp(arr[mid].name, target);
        if (cmp == 0) {
            // Found the student
            return mid;
        } else if (cmp < 0) {
            // The target name is greater, search in the right half
            low = mid + 1;
        } else {
            // The target name is smaller, search in the left half
            high = mid - 1;
        }
    }

    // Student not found
    return -1;
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of students
    Student students[n];

    for (int i = 0; i <n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf(" %[^\n]s", students[i].name);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    char target[100];
    printf("Enter the name of the student to search for: ");
     scanf(" %[^\n]s", target);

    // Perform binary search
    int index = binarySearch(students, 0, n - 1, target);

    if (index != -1) {
        printf("Student found!\n");
        printf("Name: %s\n", students[index].name);
    } else {
        printf("Student not found.\n");
    }

    return 0;
}

