#include <stdio.h>

// Multi-line Macro example
#define print(); printf("I")\
        printf("Like");\
        printf("IMT");


int main()
{
    printf("--- PRE-DEFINED MACROS IN ANSI C ---\n\n");
    printf("File: %s\n", __FILE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("Line: %d\n", __LINE__);
    printf("STDC: %d\n", __STDC__);
    printf("---------------------------------------\n");


    return 0;
}