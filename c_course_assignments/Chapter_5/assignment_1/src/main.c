#include <stdio.h>
#include "maxmin.h"

int main() {

    int numOne, numTwo, numThree, numFour;

    // Prompt the user to enter four integers
    printf("numOne: ");
    scanf("%d", &numOne);

    printf("numTwo: ");
    scanf("%d", &numTwo);

    printf("numThree: ");
    scanf("%d", &numThree);

    printf("numFour: ");
    scanf("%d", &numFour);

    // testing the maximum function
    printf("The minimum of the 4 numbers is %d\n", get_min(numOne, numTwo, numThree, numFour));
    printf("The maximum of the 4 numbers is %d\n", get_max(numOne, numTwo, numThree, numFour));
}