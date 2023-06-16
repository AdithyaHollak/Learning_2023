#include <stdio.h>

void smallest_Largest(int n) {
    int smallest = 0, largest = 0, temp;
    int r = 0;

    while (n > 0) {
        temp = n % 10;

        if (r == 0) {
            smallest = temp;
            largest = temp;
            r++;
        }

        if (temp > largest) {
            largest = temp;
        } else if (temp < smallest) {
            smallest = temp;
        }

        n /= 10;
    }

    if (smallest != largest) {
        printf("%d and %d are the Smallest and Largest digit respectively.\n", smallest, largest);
    } else {
        printf("Not Valid\n");
    }
}

int main() {
    int test;
    int n = 3;
    smallest_Largest(n);
    n = 8;
    smallest_Largest(n);
    n = 156;
    smallest_Largest(n);
    n = 123450;
    smallest_Largest(n);
    return 0;
}
