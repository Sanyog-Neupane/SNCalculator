//
// Created by sanyog-neupane on 9/13/26.
//
#include <stdio.h>
#include "calc.h"
char operator_validation_for_a(char operator) {
    printf("Please enter the work that you want to do:\n");
    scanf(" %c",&operator);
    switch (operator) {
        case '+': case '-': case '*': case '/':
            break;
        case 's':
            printf("The square root of the first number you enter will be taken.\n");
            break;
        case '2':
            printf("The first number you enter will be squared.\n");
            break;
        default:
            printf("Error: '%c' is not a valid operator.\n", operator);
            break;
    }
    return operator;
}