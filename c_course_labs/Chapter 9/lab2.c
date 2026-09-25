#include <stdio.h>

#define STUDENTS 10

struct student {
    int id;
    int mathGrade;
    int languageGrade;
    int physicsGrade;
    int chemistryGrade;
};

int main()
{
    struct student students[STUDENTS] = {
            {1,  85, 92, 78, 90},
            {2,  64, 70, 58, 62},
            {3,  95, 88, 91, 94},
            {4,  45, 52, 60, 50},
            {5,  72, 81, 79, 85},
            {6,  88, 76, 84, 80},
            {7,  90, 95, 93, 89},
            {8,  55, 61, 58, 67},
            {9,  79, 83, 75, 78},
            {10, 68, 74, 71, 73}
    };

    int studentID;

    printf("Please Enter Student ID: ");
    scanf("%d", &studentID);

    if(studentID >= 0 && studentID <= 9) 
    {
        for(int i = 0; i < STUDENTS; i++)
        {
            if(studentID == students[i].id) {
                printf("Math Grade: %d\n", students[i].mathGrade);
                printf("Language Grade: %d\n", students[i].languageGrade);
                printf("Physics Grade: %d\n", students[i].physicsGrade);
                printf("Chemistry Grade: %d\n", students[i].chemistryGrade);
            }

        }

    }

    else {
        printf("Student ID is not correct\n");
    }


    return 0;
}