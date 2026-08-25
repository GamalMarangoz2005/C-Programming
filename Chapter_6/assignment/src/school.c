#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "computing.h"

#define NUM_CLASSES 3
#define CLASS_SIZE 10
#define TOTAL_STUDENTS (NUM_CLASSES * CLASS_SIZE)
#define PASSING_GRADE 50
#define MAX_GRADE 100

int main()
{
    // defining the three arrays for the 3 classes.
    int classes[NUM_CLASSES][CLASS_SIZE];
    int flatSchoolGrades[TOTAL_STUDENTS];
    int passedStudents = 0;
    int failedStudents = 0;
    int flatIndex = 0;

    srand((unsigned int)time(NULL));

    for(int i = 0; i < NUM_CLASSES; i++) {
        for(int j = 0; j < CLASS_SIZE; j++) {

            classes[i][j] = rand() % (MAX_GRADE + 1);
    
            if(classes[i][j] >= PASSING_GRADE) {
                passedStudents++;
            } else {
                failedStudents++;
            }
    
            flatSchoolGrades[flatIndex++] = classes[i][j];
        }
    }

    printf("--- School Statistics ---\n");
    printf("Passed Students: %d\n", passedStudents);
    printf("Failed Students: %d\n", failedStudents);
    printf("\n--- Grades Extremes ---\n");
    printf("Lowest Grade: %d\n", find_min(flatSchoolGrades, TOTAL_STUDENTS));
    printf("Highest Grade: %d\n", find_max(flatSchoolGrades, TOTAL_STUDENTS));
    printf("\n--- Average Grade ---\n");
    printf("School Average: %.2f/%d\n", find_average(flatSchoolGrades, TOTAL_STUDENTS), MAX_GRADE);


    return 0;
}

