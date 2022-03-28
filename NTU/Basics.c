#include <stdio.h>
#include "MaxNumber.c"

#define WIDTH 512
#define HEIGHT 512

enum Color { Red, Green, Blue };

int max(int num1, int num2);

int main() {

    printf("%d\n", WIDTH);
    printf("%d\n", HEIGHT);

    enum Color color_of_my_cloth;
    color_of_my_cloth = Green;
    printf("%d\n", color_of_my_cloth);

    int maxNumber;

    maxNumber = max(5, 10);
    printf("Max number is %d", maxNumber);

    return 0;
}


