#include<stdio.h>

static unsigned char image1[512*256];
static unsigned char image2[512*256];
static int res_x, res_y;

static ReadImage(char *filename) {
    //
}

void main(int argc, char **argv) {
    int row, col;
    res_x = 512;
    res_y = 256;

    for(row=0; row<256; row++) {
        for(col=0; col<512; col++) {
            image2[row*res_x + col] = image1[row*res_x + col];
        }
    }
}

