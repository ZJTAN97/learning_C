#include <stdio.h>

int main() {

    int x; // declaration
    x = 123; // initialization
    int y = 321; // declaration and intialization

    int age = 21; // integer 
    float gpa = 4.6; // floating point number,  %f, 4 bytes (32 bits of precision)
    double d = 3.141592653589793; // 8 bytes (64 bits of precision)
    char grade = 'A'; // single character %c

    // no strings in C cause it does not support OOP

    char name[] = "Bro"; // array of characters %s

    char f = 120; // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255; // 1 byte (0 to +255) %d or %c

    const float PI = 3.14159; // constant variable

    printf("Hello %s\n", name);
    printf("You are %d age years old\n", age);
    printf("Your average grade is %c\n", grade);



    return 0;
}