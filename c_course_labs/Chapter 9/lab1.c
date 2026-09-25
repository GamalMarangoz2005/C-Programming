#include <stdio.h>
#include <string.h>
#include <stdint.h>

struct employee {
    char name[20];
    float bonus;
    float deduction;
    float salary;
};

int main()
{
    struct employee empOne, empTwo, empThree;
    strcpy(empOne.name, "Ahmed");
    strcpy(empTwo.name, "Amr");
    strcpy(empThree.name, "Waleed");

    printf("Please Enter %s Salary: ", empOne.name);
    scanf("%f", &empOne.salary);
    printf("Please Enter %s Bonus: ", empOne.name);
    scanf("%f", &empOne.bonus);
    printf("Please Enter %s Deduction: ", empOne.name);
    scanf("%f", &empOne.deduction);

    printf("\n\n");

    printf("Please Enter %s Salary: ", empTwo.name);
    scanf("%f", &empTwo.salary);
    printf("Please Enter %s Bonus: ", empTwo.name);
    scanf("%f", &empTwo.bonus);
    printf("Please Enter %s Deduction: ", empTwo.name);
    scanf("%f", &empTwo.deduction);
    
    printf("\n\n");

    printf("Please Enter %s Salary: ", empThree.name);
    scanf("%f", &empThree.salary);
    printf("Please Enter %s Bonus: ", empThree.name);
    scanf("%f", &empThree.bonus);
    printf("Please Enter %s Deduction: ", empThree.name);
    scanf("%f", &empThree.deduction);

    printf("\n\n");

    float salaries;
    salaries = (empOne.salary + empTwo.salary + empThree.salary);
    
    float deductions;
    deductions = (empOne.deduction + empTwo.deduction + empThree.deduction);

    float bonuses;
    bonuses = (empOne.bonus + empTwo.bonus + empThree.bonus);

    float value = ( (salaries + bonuses) - deductions );
    printf("Total Value Needed is %.2f\n", value);

    return 0;
}