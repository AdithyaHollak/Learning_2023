#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Binary representation:\n");
    for (int i = 31; i >= 0; i--) {
        putchar((num >> i) & 1 ? '1' : '0');
    }
    printf("\n");

    return 0;
}
