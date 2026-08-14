#include "calculator.h"

// arithmetic operation functions
float add(float opOne, float opTwo)
{
    return opOne + opTwo;
}

float subtract(float opOne, float opTwo)
{
    return opOne - opTwo;
}

float multiply(float opOne, float opTwo)
{
    return opOne * opTwo;
}

float divide(float opOne, float opTwo)
{
    return opOne / opTwo;
}

int reminder(int opOne, int opTwo)
{
    return opOne % opTwo;
}





// bitwise operation functions
int anding(int opOne, int opTwo)
{
    return opOne & opTwo;
}

int oring(int opOne, int opTwo)
{
    return opOne | opTwo;
}

int negating(int op)
{
    return ~op;
}

int xoring(int opOne, int opTwo)
{
    return opOne ^ opTwo;
}





// unary operation functions
int increment(int opOne)
{
     opOne++;
     return opOne;
}

int decrement(int opTwo)
{
    opTwo--;
    return opTwo;
}

