#include <stdio.h>

typedef unsigned char u8;
typedef signed char s8;

typedef short unsigned int u16;
typedef unsigned int u32;

typedef short signed int s16;
typedef signed int s32;

typedef float f32;
typedef double f64;
typedef long double f128;

int main()
{
    printf("- char - - -\n");
    printf("unsigned char: %lu bytes\nsigned char: %lu bytes\n", sizeof(u8), sizeof(s8));
    printf("\n- unsigned int - - -\n");
    printf("short unsigned int: %lu bytes\nunsigned int: %lu bytes\n", sizeof(u16), sizeof(u32));
    printf("\n- signed int - - -\n");
    printf("short signed int: %lu bytes\nsigned int: %lu bytes\n", sizeof(s16), sizeof(s32));
    printf("\n- float - - -\n");
    printf("float: %lu bytes\n", sizeof(f32));
    printf("\n- double - - -\n");
    printf("double: %lu bytes\n", sizeof(f64));
    printf("\n- long double - - -\n");
    printf("long double: %lu bytes\n", sizeof(f128));
    printf("- - - - - - - -\n");


    return 0;
}