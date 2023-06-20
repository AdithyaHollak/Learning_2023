#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex read() {
    struct Complex num;

    printf("Enter real part: ");
    scanf("%f", &num.real);

    printf("Enter imaginary part: ");
    scanf("%f", &num.imag);

    return num;
}

void write(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imag);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;

    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    return sum;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex product;

    product.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    product.imag = (num1.real * num2.imag) + (num1.imag * num2.real);

    return product;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    num1 = read();

    printf("\nEnter the second complex number:\n");
    num2 = read();

    printf("\nPerforming Addition:\n");
    sum = addComplex(num1, num2);
    write(num1);
    printf("+\n");
    write(num2);
    printf("= ");
    write(sum);

    printf("\n\nPerforming Multiplication:\n");
    product = multiplyComplex(num1, num2);
    write(num1);
    printf("*\n");
    write(num2);
    printf("= ");
    write(product);

    return 0;
}
