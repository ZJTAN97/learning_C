#include <stdio.h>
#include "MaxNumber.h"

#define WIDTH 512
#define HEIGHT 512

enum Color { Red, Green, Blue };

int test_val;

int main() {

    printf("%d\n", WIDTH);
    printf("%d\n", HEIGHT);

    enum Color color_of_my_cloth;
    color_of_my_cloth = Green;
    printf("%d\n", color_of_my_cloth);

    int maxNumber;

    maxNumber = max(5, 10);
    test_val = 10;

    printf("Max number is %d\n", maxNumber);
    printf("Test value is %d", test_val);

    return 0;
}


