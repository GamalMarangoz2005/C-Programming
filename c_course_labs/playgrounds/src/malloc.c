#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    if(ptr == NULL){
        printf("Sorry ! unable to allocate memory\n");
        exit(0);
    }

    printf("Enter elements of array: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Pointer size: %zu bytes\n", n * sizeof(ptr));
    printf("Sum = %d\n", sum);
    free(ptr);




    return 0;
}