#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

void calculateVolume(struct Box *box) {
    float volume;
    volume = box->length * box->width * box->height;
    printf("Volume of the box: %.2f\n", volume);
}


void calculateTSA(struct Box *box) {
    float TSA;
    TSA = 2 * (box->length * box->width + box->width * box->height + box->height * box->length);
    printf("Total Surface Area of the box: %.2f\n", TSA);
}

int main() {
    struct Box myBox;
    struct Box *boxPtr = &myBox;

    printf("Enter the length of the box: ");
    scanf("%f", &(boxPtr->length));

    printf("Enter the width of the box: ");
    scanf("%f", &(boxPtr->width));

    printf("Enter the height of the box: ");
    scanf("%f", &(boxPtr->height));

    calculateVolume(boxPtr);
    calculateTSA(boxPtr);

    return 0;
}

