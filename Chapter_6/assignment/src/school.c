#include <stdio.h>
#include "computing.h"

int main()
{
    // defining the three arrays for the 3 classes.
    int classA[10] = {85, 92, 78, 64, 90, 73, 88, 95, 81, 69 };
    int classB[10] = {55, 62, 70, 84, 91, 77, 68, 83, 76, 89 };
    int classC[10] = {98, 87, 93, 79, 82, 94, 90, 86, 91, 100};
    int sizeA = sizeof(classA) / sizeof(classA[0]);
    int sizeB = sizeof(classB) / sizeof(classB[0]);
    int sizeC = sizeof(classC) / sizeof(classC[0]);
    printf("\n--- The number of passed students ---\n");
    int passedStudents = 0;
    int failedStudents = 0;
    for(int i = 0; i < 10; i++) {
        if(classA[i] >= 50) {
            passedStudents++;
        } else {
            failedStudents++;
        }

        if(classB[i] >= 50) {
            passedStudents++;
        } else {
            failedStudents++;
        }

        if(classC[i] >= 50) {
            passedStudents++;
        } else {
            failedStudents++;
        }
    }
    printf("Passed Students: %d\n", passedStudents);
    printf("Failed Students: %d\n", failedStudents);

    printf("\n--- Highest Grade Students ---\n");
    int highestGrade[3] = {0,0,0};
    int lowestGrade[3]  = {0,0,0};
    int gradeSize = sizeof(highestGrade) / sizeof(lowestGrade[0]);
    highestGrade[0] = find_max(classA, sizeA);
    highestGrade[1] = find_max(classB, sizeB);
    highestGrade[2] = find_max(classC, sizeC);
     lowestGrade[0] = find_min(classA, sizeA);
     lowestGrade[1] = find_min(classB, sizeB);
     lowestGrade[2] = find_min(classC, sizeC);
    printf("Lowest  grade: %d\n", find_min(lowestGrade, gradeSize));
    printf("Highest grade: %d\n", find_max(highestGrade, gradeSize));

    printf("\n--- Average Grade Students ---\n");
    int averageGrade[3] = {0, 0, 0};
    int averageGradeSize = sizeof(averageGrade) / sizeof(averageGrade[0]);
    averageGrade[0] = find_average(classA, sizeA);
    averageGrade[1] = find_average(classB, sizeB);
    averageGrade[2] = find_average(classC, sizeC);
    printf("Average grade is %f\n knowing that\nthe total grade is from\n100 and the minimum\npassing grade is 50\n", find_average(averageGrade, averageGradeSize));

}