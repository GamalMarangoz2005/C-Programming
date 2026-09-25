#include <stdio.h>

int summation(int *numOne, int *numTwo)
{
    return (*numOne + *numTwo);
}

int main(void)
{
    int firstNum = 0, secondNum = 0;
    printf("Please enter num 1: ");
    scanf("%d", &firstNum);
    printf("Please enter num 2: ");
    scanf("%d", &secondNum);
    printf("----------------------\n");
    printf("The result = %d\n", summation(&firstNum, &secondNum));

    return 0;
}