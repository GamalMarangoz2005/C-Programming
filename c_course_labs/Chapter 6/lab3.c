#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numbers[10];

    for(int i = 0; i < 10; i++)
    {
        printf("Number[%d]: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Performing bubble sort
    for(int j = 0; j < 10; j++)
    {
        bool swap = false;
        for(int k = 0; k < 10 - j - 1; k++) 
        {
            if(numbers[k] > numbers[k + 1]) {
                int temp = numbers[k];
                numbers[k] = numbers[k + 1];
                numbers[k + 1] = temp;
                swap = true;
            }
        }
        if (!swap) break;
    }


    // printing the array after sorting.
    for(int f = 0; f < 10; f++)
    {
        printf("%d ", numbers[f]);
    }
    printf("\n");


    
    return 0;
}