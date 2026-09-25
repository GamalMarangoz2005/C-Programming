#include "maxmin.h"
#include <stdio.h>

int get_max(int first, int second, int third, int fourth)
{
    if(first >= second && first >= third && first >= fourth)
    {
        return first;
    }

    else if(second >= first && second >= third && second >= fourth)  {
       return second;
    }

    else if(third >= first && third >= second && third >= fourth) {
        return third;
    }

    else {
        return fourth;
    }
}

int get_min(int first, int second, int third, int fourth)
{
    if(first <= second && first <= third && first <= fourth)
    {
        return first;
    }

    else if(second <= first && second <= third && second <= fourth)  {
        return second;
    }

    else if(third <= first && third <= second && third <= fourth) {
        return third;
    }

    else {
       return fourth;
    }
}