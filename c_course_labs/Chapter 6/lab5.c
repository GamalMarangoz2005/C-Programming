#include <stdio.h>
#include <stdbool.h>

int main()
{

    // input the elements into the array.
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



    //prompting the user to search
    int search, found = 0;
    printf("\nEnter a number to search for: ");
    scanf("%d", &search);



    // printing the array after sorting.
    for(int n = 0; n < 10; n++)
    {
        printf("0%d ", n);
    }
    printf("\n");
    for(int f = 0; f < 10; f++)
    {
        printf("%d ", array[f]);
    }
    printf("\n\n");



    // Performing binary search.
    int low = 0;
    int high = 9;
    bool targetFound = false;

    while(low <= high && !targetFound) {
        int mid = low + (high - low) / 2;

        if(array[mid] == search) {
            targetFound = true;
            found = mid;
        }

        else if(array[mid] < search) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    if(!targetFound)
        printf("Target not found !\n");
    else
        printf("Target %d is found at index %d (in the sorted array)\n", search, found);


    return 0;
}