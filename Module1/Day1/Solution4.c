#include <stdio.h>

int main() {
    float Operand_1, Operand_2, result;
    char operator;

    printf("Enter first Number ");
    scanf("%f", &Operand_1);

    printf("Enter the operator ");
    scanf(" %c", &operator);

    printf("Enter second Number ");
    scanf("%f", &Operand_2);

    switch (operator) {
        case '+':
            result = Operand_1+ Operand_2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = Operand_1 - Operand_2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = Operand_1 * Operand_2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (Operand_2!= 0) {
                result = Operand_1/ Operand_2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
