#include <stdio.h>

void print_array(int arr[], int size)
{
    for(int i = 0; i < size; i++) {
        printf("Arr[%d] = %d\n", i , arr[i]);
    }
    return;
}

int minarray(int arr[], int size)
{
    int min = arr[0];
    int i = 0;

    for(i = 1; i < size; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }

    printf("minimum number is %d \n", min);
    return min;
}

int main()
{
    int numbers[] = {4, 5, 7, 3, 8, 9};
    
    minarray(numbers, 6);
    print_array(numbers, 6);

    return 0;
}