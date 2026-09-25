#include <stdio.h>

void calculate(int arg1, int arg2, int *resultOne, int *resultTwo)
{
    *resultOne = arg1 + arg2;
    *resultTwo = arg1 - arg2;
}


int main(void)
{
    int numOne = 0, numTwo = 0;
    printf("Please enter num 1: ");
    scanf("%d", &numOne);
    printf("Please enter num 2: ");
    scanf("%d", &numTwo);

    int addition = 0, subtraction = 0;
    calculate(numOne, numTwo, &addition, &subtraction);


    printf("Addition: %d\nSubtraction: %d\n", addition, subtraction);
    return 0;
}