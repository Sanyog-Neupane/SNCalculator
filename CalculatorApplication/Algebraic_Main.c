//
// Created by sanyog-neupane on 9/14/26.
//
#include <stdio.h>
#include "calc.h"
int Algebraic_Main(char type) {
  char b_type;
  printf("Enter Q for quadratic and L for linear equation solving (Intersection point finding):");
  scanf(" %c",  &b_type);
  if (b_type == 'Q') {
    Quadratic_Solver(b_type);
  }
  else if (b_type == 'L') {
    Linear_Equation_System(b_type);
  }
  else {
    printf("Invalid Input!");
  }
return 0;
}