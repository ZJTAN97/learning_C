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

    // printf("-- argv example --\n");
    // printf("%c", argv[0]);
    // printf("%c", argv[1]);


    int* pc, c;
    int *memory_loc;
    int memory;
    memory = 5;
    memory_loc = &memory;

    c = 5;
    pc = &c;
    c = 1;
    printf("-- more pointers example --\n");
    printf("%d\n", c);
    printf("%d\n", *pc);
    printf("%d\n", pc);

    printf("%d\n", *pc);
    printf("%d\n", *memory_loc);


}