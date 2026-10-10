//
// Created by sanyog-neupane on 9/14/26.
//
#include <stdio.h>
#include "calc.h"
int Linear_Equation_System(char b_type) {
    if (b_type == 'L') {
        float matrix[2][3];
        printf("Please enter the equations in ax+by+c form.");
        printf("Enter first equation:\n");
        scanf("%f",&matrix[0][0]);
        scanf("%f",&matrix[0][1]);
        scanf("%f",&matrix[0][2]);
        printf("Enter second equation:\n");
        scanf("%f",&matrix[1][0]);
        scanf("%f",&matrix[1][1]);
        scanf("%f",&matrix[1][2]);
        float determinant = (matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]);
        if (determinant == 0) {
            printf("The equations cannot be solved.\n");
        }
        else {
            printf("The equations are being solved.\n");
            Finding_Adjugate_and_Solving(determinant, matrix);
        }
    }
    return 0;
}