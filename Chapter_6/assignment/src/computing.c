#include "computing.h"
#include <stddef.h>

int find_max(const int arr[], int size)
{
    // safety guard added for find_max
    if(arr == NULL || size <= 0)
        return -1;

    int max = arr[0];
    
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int find_min(const int arr[], int size)
{
    // safety guard added for find_min
    if(arr == NULL || size <= 0)
        return -1;

    int min = arr[0];
    
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

float find_average(const int arr[], int size)
{
    // safety guard added for find_average
    if(arr == NULL || size <= 0)
        return 0.0f;

    int sum = 0;
    
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // fixing integer division truncation by explicitly casting sum to float.
    return ( (float) sum / size );
}