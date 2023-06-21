#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2;
    char ch;
    
    f1 = fopen("f1.txt", "r");
    if (f1 == NULL) {
        printf("Unable to open the source file.\n");
        exit(1);
    }

    f2 = fopen("f2.txt", "w");
    if (f2 == NULL) {
        printf("Unable to create the destination file.\n");
        exit(1);
    }
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f2);
    }
    fclose(f1);
    fclose(f2);

    printf("File copied successfully.\n");

    return 0;
}

