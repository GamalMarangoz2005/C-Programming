#include <stdio.h>

int main()
{

    int arr[10];

    // prompting the user to input numbers from 1 to 10
    for(int i = 0; i < 10; i++) {
        printf("Please Enter number %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe values in reversed order\n\n");

    for(int j = 9; j >= 0; j--) {
        printf("%d\n", arr[j]);
    }

    return 0;
}