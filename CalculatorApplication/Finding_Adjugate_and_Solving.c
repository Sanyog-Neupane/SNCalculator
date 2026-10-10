//
// Created by sanyog-neupane on 9/18/26.
//
#include <stdio.h>
#include "calc.h"
float Finding_Adjugate_and_Solving(float determinant, float matrix[2][3]) {
    float Adjugate[2][2]={
        {matrix[1][1],-matrix[0][1]},
        {-matrix[1][0], matrix[0][0]}
    };
    float inverse[2][2]={
        {(1/determinant)*Adjugate[0][0],(1/determinant)*Adjugate[0][1]},
        {(1/determinant)*Adjugate[1][0],(1/determinant)*Adjugate[1][1]}
    };
    float x= inverse[0][0]*matrix[0][2]+inverse[0][1]*matrix[1][2];
    float y= inverse[1][0]*matrix[0][2]+inverse[1][1]*matrix[1][2];
    printf("x=%f, y=%f",x,y);
    return 0;
}