#include <stdio.h>

unsigned char image[512*512];

void main(int argc, char **argv) {
    image[4*512+7] = 413;

    printf("\n> Pixel value at (4,7) = %d", image[4*512+7]);

}

