#include <stdio.h>

#define GERMANY_HOT_THRESHOLD 15
#define EGYPT_HOT_THRESHOLD 35

int main(void)
{
    float currentTemperature = 45.0f;
    
    if(currentTemperature >= GERMANY_HOT_THRESHOLD) {
        printf("It's very hot in Germany !\n");
    }

    else if(currentTemperature >= EGYPT_HOT_THRESHOLD) {
        printf("It's very hot in Egypt !\n");
    }

    else {
        printf("Oops, Something went wrong !\n");
    }

    return 0;
}