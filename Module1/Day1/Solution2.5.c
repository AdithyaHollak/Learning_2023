#include <stdio.h>

int CharType(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else if (c >= 'a' && c <= 'z') {
        return 2;
    } else if (c >= '0' && c <= '9') {
        return 3;
    } else if (c >= 32 && c <= 126) {
        return 4;
    } else {
        return 5;
    }
}

int main() {
    char a;
    printf("Enter a character to check What type of Character passed: ");
    scanf("%c", &a);
    
    int op = CharType(a);
    
    switch (op) {
        case 1:
            printf("Type: Uppercase Letter\n");
            break;
        case 2:
            printf("Type: Lowercase Letter\n");
            break;
        case 3:
            printf("Type: Digit\n");
            break;
        case 4:
            printf("Type: Printable Symbol\n");
            break;
        case 5:
            printf("Type: Non-Printable Symbol\n");
            break;
        default:
            printf("Type: Unknown\n");
            break;
    }

    return 0;
}

