#include <stdio.h>

void main(char *argv[]) {
    int myAge = 13;

    printf("%d\n", myAge);
    printf("%p\n", myAge);

    int x, *y, z;

    x = 13;
    y = &x;
    z = *y;

    printf("-- Second example --\n");
    printf("%d\n", x);
    printf("%p\n", y);
    printf("%d\n", z);
    printf("%p\n", z);

    printf("-- argv example --\n");
    printf("%c", argv[0]);
    printf("%c", argv[1]);

}