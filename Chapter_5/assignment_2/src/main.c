#include <stdio.h>
#include "calculator.h"

int main()
{
    char command;
    int opIntOne, opIntTwo;
    float opFloatOne, opFloatTwo;

    // prompting the user
    printf("\n\n\t--- Simple Calculator ---\n\n");

    // printing the commands for using the program
    printf("\t[ARITHMETIC OPTIONS]\n");
    printf("[+]: Addition\n[-]: Subtraction\n[*]: Multiplication\n[/]: Division\n\n");

    printf("\t[BITWISE OPTIONS]\n");
    printf("[|]: Logic OR\n[&]: Logic AND\n[~]: Logic NOT\n[^]: Logic XOR\n\n");

    printf("\t[UNARY OPTIONS]\n");
    printf("[I]: Increment\n[D]: Decrement\n\n");

    printf("Prompt: ");
    scanf("%c", &command);

    switch(command) {
        case '+':
            printf("Enter the first operand: ");
            scanf("%f", &opFloatOne);
            printf("Enter the second operand: ");
            scanf("%f", &opFloatTwo);
            printf("The addition result is %f\n\n", add(opFloatOne, opFloatTwo));
            break;
        
        case '-':
            printf("Enter the first operand: ");
            scanf("%f", &opFloatOne);
            printf("Enter the second operand: ");
            scanf("%f", &opFloatTwo);
            printf("The subtraction result is %f\n\n", subtract(opFloatOne, opFloatTwo));
            break;
        
        case '*':
            printf("Enter the first operand: ");
            scanf("%f", &opFloatOne);
            printf("Enter the second operand: ");
            scanf("%f", &opFloatTwo);
            printf("The multiplication result is %f\n\n", multiply(opFloatOne, opFloatTwo));
            break;
        
        case '/':
            printf("Enter the first operand: ");
            scanf("%f", &opFloatOne);
            printf("Enter the second operand: ");
            scanf("%f", &opFloatTwo);
            printf("The division result is %f\n\n", divide(opFloatOne, opFloatTwo));
            break;

        case '%':
            printf("Enter the first operand: ");
            scanf("%d", &opIntOne);
            printf("Enter the second operand: ");
            scanf("%d", &opIntTwo);
            printf("The modulo result is %d\n\n", reminder(opIntOne, opIntTwo));
            break;
        
        case '|':
            printf("Enter the first operand: ");
            scanf("%d", &opIntOne);
            printf("Enter the second operand: ");
            scanf("%d", &opIntTwo);
            printf("The ORING result is %d\n\n", oring(opIntOne, opIntTwo));
            break;
        
        case '&':
            printf("Enter the first operand: ");
            scanf("%d", &opIntOne);
            printf("Enter the second operand: ");
            scanf("%d", &opIntTwo);
            printf("The ANDING result is %d\n\n", anding(opIntOne, opIntTwo));
            break;

        case '^':
            printf("Enter the first operand: ");
            scanf("%d", &opIntOne);
            printf("Enter the second operand: ");
            scanf("%d", &opIntTwo);
            printf("The XORING result is %d\n\n", xoring(opIntOne, opIntTwo));
            break;
        
        case '~':
            printf("Enter the operand: ");
            scanf("%d", &opIntOne);
            printf("The NEGATING result is %d\n\n", negating(opIntOne));
            break;

        case 'I':
            printf("Enter the operand: ");
            scanf("%d", &opIntOne);
            printf("The increment result is %d\n\n", increment(opIntOne));
            break;

        case 'D':
            printf("Enter the operand: ");
            scanf("%d", &opIntOne);
            printf("The decrement result is %d\n\n", decrement(opIntOne));
            break;

        default:
            printf("Invalid input !\n\n");
            break;

    }

    return 0;

}