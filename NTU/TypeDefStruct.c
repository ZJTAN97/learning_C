#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;


typedef struct  
{
    unsigned char pixmap[512][512];
    int resolution_x;
    int resolution_y;
} Image;


Image left, right; // memory to hold values
Image *p_left, *p_right; // memory to hold addresses 

int main() {

    Point p1;

    p1.x = 1;
    p1.y = 3;

    printf("%d \n", p1.x);
    printf("%d \n", p1.y);    

    p_left = &left; // assignment of address
    p_right = &right;  // assignment of address

    left.resolution_x = 512; // assignment of value
    left.resolution_y = 512; // assignment of value

    p_right->resolution_x = 512;
    p_right->resolution_y = 512;

    printf("-- Image Data Structure -- \n");
    printf("%d \n", p_left->resolution_x);
    printf("%d \n", p_right->resolution_x);

    return 0;
}
