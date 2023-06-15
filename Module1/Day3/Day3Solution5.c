#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int number, smallest = 9, largest = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        while (number) {
            int digit = number % 10;
            smallest = (digit < smallest) ? digit : smallest;
            largest = (digit > largest) ? digit : largest;
            number /= 10;
        }
    }

    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);

    return 0;
}
