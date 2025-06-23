#include <stdio.h>

int main() {
    int marks[3][4] = {
        {85, 90, 78, 92},
        {88, 76, 95, 89},
        {90, 85, 88, 91}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Student %d, Subject %d: %d\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}
// This code initializes a 2D array with student marks and prints them.
// It uses nested loops to iterate through the rows and columns of the array.