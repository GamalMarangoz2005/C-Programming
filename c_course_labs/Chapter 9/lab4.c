#include <stdio.h>

typedef struct randomStructure {
    char a;
    int b;
    short c;
} randStruct;

typedef struct structuredStructure {
    int b;
    short c;
    char a;
} structStruct;

typedef struct optimizedStructure {
    int b;
    short c;
    char a;
} __attribute__((packed)) optStruct;

int main()
{

    randStruct structOne;
    structStruct structTwo;
    optStruct structThree;

    printf("--- Structure Sizes ---\n");
    printf("randStruct: %lu bytes\n", sizeof(structOne));
    printf("structStruct: %lu bytes\n", sizeof(structTwo));
    printf("optStruct: %lu bytes\n", sizeof(structThree));


    return 0;
}