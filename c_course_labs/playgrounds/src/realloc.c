#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int*)malloc(2 * sizeof(int));
    if(arr == NULL) return 1;

    arr[0] = 10;
    arr[1] = 20;


    int *temp = (int*)realloc(arr, 4 * sizeof(int));
    if(temp == NULL) {
        free(arr);
        return 1;
    }
    arr = temp;

    arr[2] = 30;
    arr[3] = 40;

    for(int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    /*
    Notice that we did not use free(temp);
    only free(arr); that is because both of them
    point to the same memory location but, we 
    have used temp only if it had failed it will return
    back to the original arr pointer to this memory blocks.
    */

    return 0;
}