#include <stdio.h>

void fn(int *x)
{
    *x = 10;
}

int main(void)
{
    int x = 20;
    fn(&x);
    printf("x = %d\n", x);
    return 0;
}