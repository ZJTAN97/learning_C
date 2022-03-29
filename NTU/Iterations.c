#include <stdio.h>

typedef unsigned char Byte;

typedef struct {
    Byte pixmap[512][512];
    int resolution_x;
    int resolution_y;
} Image;

static Image left, right;

void main(int argc, char **argv) {

    int line, column;

    /* Set 0 to all the pixels in the left image */
    for(line=0; line<512; line++) {
        for(column=0; column<512; column++) {
            left.pixmap[line][column] = 0;
        }
    }

    /* Set 1 to all the pixels in the left image */
    for(line=0; line<512; line++) {
        for(column=0; column<512; column++) {
            right.pixmap[line][column] = 0;
        }
    }

}