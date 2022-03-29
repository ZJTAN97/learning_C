#include <stdio.h>
#include <math.h>

unsigned char image[256][256];

static void ReadImageFromFile(char *filename) {
    FILE *pf;

    pf = fopen(filename, "r");
    fread("image", 1, 256*256, pf);
    fclose(pf);
}

static void WriteImageToFile(char *filename) {
    FILE *pf;

    pf = fopen(filename, "w");
    fwrite(image, 1, 256*256, pf);
    fclose(pf);
}

void main (int argc, char **argv) {
    ReadImageFromFile("avatar-5.jpg");
    WriteImageToFile("tata.jpg");
}