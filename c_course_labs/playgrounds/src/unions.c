#include <stdio.h>

struct myStruct {
    int i; // 4 bytes
    float f; // 4 bytes
    char c; // 1 byte
};

union myUnion {
    int i;
    float f;
    char c;
};

int main(void)
{
    printf("Size of struct: %zu bytes\n", sizeof(struct myStruct));
    printf("Size of union:  %zu bytes\n\n", sizeof(union myUnion));

    union myUnion u;
    u.i = 42;
    printf("Union Float: %f\nUnion Int: %d\nUnion Char: %c\n",u.f,u.i,u.c);
    u.f = 3.14;
    printf("Union Float: %f\nUnion Int: %d\nUnion Char: %c\n",u.f,u.i,u.c);

    return 0;
}