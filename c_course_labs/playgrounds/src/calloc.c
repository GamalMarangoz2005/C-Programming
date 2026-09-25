#include <stdio.h>
#include <stdlib.h>

// 32-bit / 8 byte = 4 bytes.
typedef unsigned int u32;


int main()
{
    // allocating memory block but, using calloc

    
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // n memory blocks * 4 bytes = 4 * n bytes of memory allocated.
    u32 *ptr = (u32*) calloc(n, sizeof(u32)); 

    // why we are doing this check after memory allocation despite, that we have done the allocation process in the code line before this check ?
    if(ptr == NULL) {
        printf("Sorry! unable to allocate memory");
        exit(0);
    }

    int sum= 0;

    printf("\t--- Enter elements of array ---\n");
    for(int i = 0; i < n; i++)
    {
        printf("E%d: ", i + 1);
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("\nSum = %d\n", sum);
    free(ptr);

    return 0;
}