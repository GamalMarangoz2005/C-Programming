#include <stdio.h>

// Comment each of those structs to test the number labeling of it.
// enum fruitsDefault {
//     mango, // -> 0
//     apple, // -> 1
//     strawberry, // -> 2
//     papaya // -> 3
// };

enum fruitsDetermined {
  mango = 2, 
  apple = 1, 
  strawberry = 5,
  papaya = 7  
};

// enum fruitsAuto {
    // mango = 1, 
    // apple,
    // strawberry,
    // papaya
// };


int main()
{
    // enum fruitsDefault frtOne;
    // frtOne = strawberry;

    enum fruitsDetermined frtTwo;
    frtTwo = strawberry;

    // enum fruitsAuto frtThree;
    // frtThree = strawberry;

    // printf("fruitsDefault: %d\n", frtOne);
    printf("fruitsDetermined: %d\n", frtTwo);
    // printf("fruitsAuto: %d\n", frtThree);
    return 0;
}