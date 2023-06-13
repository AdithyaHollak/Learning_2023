#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result = num;  

    if (oper_type == 1) {
        result |= (1 << 0);  
    } else if (oper_type == 2) {
        result &= ~(1 << 30);  
    } else if (oper_type == 3) {
        result ^= (1 << 15);  
    }

    return result;
}

int main() {
    int number, operation;

    printf("Enter the number (32 bits): ");
    scanf("%d", &number);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &operation);

    int result = bit_operations(number, operation);

    printf("Result: %d\n", result);

    return 0;
}
