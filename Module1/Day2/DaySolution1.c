#include <stdio.h>

int main() {
    double x = 0.7;
    unsigned long long *ptr = (unsigned long long *)&x;
    unsigned long long bits = *ptr;
    
    unsigned long long exponent = (bits >> 52) & 0x7FF;
    printf("Exponent in Hexadecimal : 0x%llX \n", exponent);
    
    printf("Exponent in Binary: ");
    for (int i = 10; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
  
    printf("\n");
    
    return 0;
}

