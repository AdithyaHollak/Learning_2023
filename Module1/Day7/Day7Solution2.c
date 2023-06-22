
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function to convert text to uppercase
void toUpperCase(FILE* sourceFile, FILE* destFile) {
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(toupper(ch), destFile);
    }
}

// Function to convert text to lowercase
void toLowerCase(FILE* sourceFile, FILE* destFile) {
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(tolower(ch), destFile);
    }
}

// Function to convert text to sentence case
void toSentenceCase(FILE* sourceFile, FILE* destFile) {
    int ch;
    int sentenceStart = 1;
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (sentenceStart && islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, destFile);
        sentenceStart = (ch == '.' || ch == '!' || ch == '?');
    }
}

// Function to copy file contents based on user options
void copyFile(const char* sourceFilename, const char* destFilename, char option) {
    FILE* sourceFile = fopen(sourceFilename, "r");
    FILE* destFile = fopen(destFilename, "w");

    if (sourceFile == NULL) {
        printf("Error opening source file: %s\n", sourceFilename);
        return;
    }

    if (destFile == NULL) {
        printf("Error opening destination file: %s\n", destFilename);
        fclose(sourceFile);
        return;
    }

    if (option == 'u') {
        toUpperCase(sourceFile, destFile);
    } else if (option == 'l') {
        toLowerCase(sourceFile, destFile);
    } else if (option == 's') {
        toSentenceCase(sourceFile, destFile);
    } else {
        int ch;
        while ((ch = fgetc(sourceFile)) != EOF) {
            fputc(ch, destFile);
        }
    }

    fclose(sourceFile);
    fclose(destFile);
    printf("File copied successfully!\n");
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: ./filecopy <sourcefile> <destinationfile> [option]\n");
        printf("Options:\n");
        printf("  -u: Convert file content to uppercase\n");
        printf("  -l: Convert file content to lowercase\n");
        printf("  -s: Convert file content to sentence case\n");
        printf("If no option is passed, a normal copy will be performed.\n");
        return 0;
    }

    const char* sourceFilename = argv[1];
    const char* destFilename = argv[2];
    char option = ' ';

    if (argc >= 4) {
        option = argv[3][1];
    }

    copyFile(sourceFilename, destFilename, option);

    return 0;
}

