#include <stdio.h>

typedef unsigned char Byte;

static Byte in_image[10][10];
static Byte out_image[5][5];

static void ReadImage() {
    // empty
}

void main(int argc, char **argv) {
    int line, column;
    ReadImage();
    for(line=0; line<5; line++) {
        for(column=0; column<5; column++) {
            out_image[line][column] = in_image[2*line][2*column];
        }
    }

    int i, j;

    for(i=0; i<10; i++) {
        for(j=0; j<10; j++) {
            printf("%d ", out_image[i][j]);
        }
        printf("\n");
    }

    printf("\n------------\n");

    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            printf("%d ", in_image[i][j]);
        }
        printf("\n");
    }

}