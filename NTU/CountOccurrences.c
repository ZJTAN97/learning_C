#include <stdio.h>

typedef unsigned char Byte;

static Byte one_image[512][512];
static int o_number[256];

static void ReadImage() {
    //
}

void main(int argc, char **argv) {
    int line, column, pixel_value;

    ReadImage();

    // initialize all to 0 first
    for(pixel_value=0; pixel_value < 256; pixel_value++) {
        o_number[pixel_value] = 0;
    }

    for(line=0; line<512; line++) {
        for(column=0; column<512; column++) {
            pixel_value = one_image[line][column];
            o_number[pixel_value] ++;
        }
    }
}