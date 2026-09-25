#include <stdio.h>

int main()
{
    printf("---Datatypes Sizes---\n");
    printf("char  : %lu bytes | %lu bits\nint   : %lu bytes | %lu bits\nfloat : %lu bytes | %lu bits\ndouble: %lu bytes | %lu bits\n",sizeof(char), 8 * sizeof(char), sizeof(int), 8 * sizeof(int),sizeof(float), 8 * sizeof(float) ,sizeof(double), 8 * sizeof(double));
    printf("---------------------\n");

    return 0;
}