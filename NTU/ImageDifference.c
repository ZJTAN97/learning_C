#include <stdio.h>
#include <stdlib.h>

static unsigned char image2[6*8];
static int resx, resy;

typedef unsigned char Byte;
static Byte one_image[4][4];

void main() {

    int image1[6*8] = {
        90, 90, 90, 90, 90, 90, 90, 90,
        90, 90, 50, 50, 50, 50, 50, 90,
        90, 90, 50, 50, 50, 50, 50, 90,
        90, 90, 50, 50, 50, 50, 50, 90,
        90, 90, 90, 90, 90, 90, 90, 90,
        90, 90, 90, 90, 90, 90, 90, 90,
    };

    int image2[6*8] = {
        90, 90, 90, 90, 90, 90, 90, 90,
        90, 90, 90, 90, 90, 90, 90, 90,
        90, 90, 90, 50, 50, 50, 50, 50,
        90, 90, 90, 50, 50, 50, 50, 50,
        90, 90, 90, 50, 50, 50, 50, 50,
        90, 90, 90, 90, 90, 90, 90, 90,
    };

    printf("%d \n", one_image[1][2]);



    int imageDiff[6*8];


    int row, col;

    resx = 6;
    resy = 8;

    for(row=0; row < 6; row++) {
        for(col=0; col < 8; col++) {
            imageDiff[row*resy + col] = abs(image1[row*resy + col] - image2[row*resy+col]);
            int pixel = imageDiff[row*resy + col];
            if(pixel == 40) {
                printf("1");
            } else {
                printf("-");
            }
            // printf("%d ", imageDiff[row*resy + col]);
        }
        printf("\n");
    }

}