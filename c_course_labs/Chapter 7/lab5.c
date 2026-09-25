#include <stdio.h>

#define A 10
#define B 10

int scalarMultiplication(int *arrA, int *arrB, int size)
{
    int result = 0;
    for(int i = 0; i < size; i++)
    {
        result += (arrA[i] * arrB[i]);
    }

    return result;
}

int main()
{
    int a[A], b[B];
    int size = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < A; i++) {
        printf("A%d: ", i);
        scanf("%d", &a[i]);
    }

    for(int j = 0; j < B; j++) {
        printf("B%d: ", j);
        scanf("%d", &b[j]);
    }

    printf("Scalar multiplication: %d\n", scalarMultiplication(a, b, size));


    return 0;
}