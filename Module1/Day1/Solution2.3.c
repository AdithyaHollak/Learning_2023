#include <stdio.h>

int isVowel(char a) {
    int isVowel = 0;

    switch(a) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            isVowel = 1;
            break;
    }

    return isVowel;
}

int main() {
    char b;
    printf("Enter a Letter to be checked Whether it is vowel or not: ");
    scanf("%c", &b);

    int op= isVowel(b);
    
    if (op == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }

    return 0;
}

