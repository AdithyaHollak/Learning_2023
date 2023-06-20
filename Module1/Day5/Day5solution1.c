//1)a

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
    struct Box Box;

    printf("Enter the length of the box: ");
    scanf("%f", &Box.length);

    printf("Enter the width of the box: ");
    scanf("%f", &Box.width);

    printf("Enter the height of the box: ");
    scanf("%f", &Box.height);

    calculateVolume(&Box);
    calculateTSA(&Box);

    return 0;
}

