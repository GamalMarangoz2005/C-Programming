#ifndef CALCULATOR_H
#define CALCULATOR_H

// arithmetic operation functions
float add(float opOne, float opTwo);
float subtract(float opOne, float opTwo);
float multiply(float opOne, float opTwo);
float divide(float opOne, float opTwo);
int reminder(int opOne, int opTwo);

// bitwise operation functions
int anding(int opOne, int opTwo);
int oring(int opOne, int opTwo);
int negating(int op);
int xoring(int opOne, int opTwo);

// unary operation functions
int increment(int opOne);
int decrement(int opTwo);


#endif