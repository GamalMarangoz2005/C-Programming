#include <stdio.h>

int main()
{

    // taking the input of the array elements.
    int arr[10], sum = 0;
    for(int i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", (arr + i) );
        sum += *(arr + i);
    }




    // printing the elements of the array.
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // printing the summation result 
    printf("Summation: %d\n", sum);

    return 0;
}