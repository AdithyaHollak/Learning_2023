#include <stdio.h>

void Numbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    //printf("\n");
}

void Spaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf("  ");
    }
   // printf("\n");
}

void ReverseNumbers(int n) {
    for (int i = n ;i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Pattern:\n");
    for (int i = 1; i <= n; i++) {
        Numbers(i);
        Spaces(n - i);
        ReverseNumbers(i);
    }

    return 0;
}

