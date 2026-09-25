/* 

| Bubble Sort Explained -----------------------------------

To understand how the bubble sort algorithm works
without any problems there are nested loops the outer loop
and the inner loop.

- The purpose of the inner loop is the swapping mechanism an index in 
  position i and compare it with i + 1 the next position in index if i > i + 1
  then, swap it with the help of the temp variable.

- The purpose of the outer loop is to repeat the swapping mechanism
  n times where n is the size of the data structure like an array in the worst case
  if the largest element is in the first element it should be the last element 
  because the sorting system is in ascending order. To place that element in the last 
  position then, we have to repeat this swapping mechanism which is the inner loop by 
  the outside loop n times to push the element everytime to a position closer to the 
  last index of the data structure till it reach the last element. Assuming that the list
  is already in descending order which is not what we want in this case this is just assumption
  and you can invert the order to be ascending as you want by altering with the algorithm.
  This is just the core explanation of how the algorithm works regardless of the ordering
  for this code.


*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void) {


    int n, i, *ptr;

    printf("Please Enter the number of numbers: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    if(ptr == NULL){
        printf("Sorry ! unable to allocate memory\n");
        exit(0);
    }

    
    for(i = 0; i < n; i++) 
    {
        printf("Please Enter number %d: ", i + 1);
        scanf("%d", ptr + i);
    }


    // Performing bubble sort
    for(int j = 0; j < n; j++)
    {
        bool swap = false;
        for(int k = 0; k < n - j - 1; k++) 
        {
            if(ptr[k] > ptr[k + 1]) {
                int temp = ptr[k];
                ptr[k] = ptr[k + 1];
                ptr[k + 1] = temp;
                swap = true;
            }
        }
        if (!swap) break;
    }

    // Printing the values after sorting
    for(int f = 0; f < n; f++)
    {
        printf("%d\n", *(ptr + f));
    }

    free(ptr);

    return 0;
}