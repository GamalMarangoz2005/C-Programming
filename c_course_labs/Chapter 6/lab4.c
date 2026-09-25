#include <stdio.h>
#include <stdbool.h>

int main()
{
    int array[10];
    for(int i = 0; i < 10; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Performing bubble sort
    for(int j = 0; j < 10; j++)
    {
        bool swap = false;
        for(int k = 0; k < 10 - j - 1; k++) 
        {
            if(array[k] > array[k + 1]) {
                int temp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = temp;
                swap = true;
            }
        }
        if (!swap) break;
    }



    int search, found = 0;
    printf("\nEnter a number to search for: ");
    scanf("%d", &search);

    for(int j = 0; j < 10; j++)
    {
        if(array[j] == search) {
            found++;
        }
    }

    if(found > 0)
    {
        printf("\nValue %d exists %d times\n", search , found);
    }

    else {
        printf("\nValue is not exist !\n");
    }




    return 0;
}