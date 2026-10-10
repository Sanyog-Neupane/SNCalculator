//
// Created by sanyog-neupane

#ifndef CALCULATORAPPLICATION_CALC_H
#define CALCULATORAPPLICATION_CALC_H
double answer(double ans, double num1, double num2, char operator);
void taking_input_for_a(float *num1, float *num2);
char operator_validation_for_a(char operator);
int Arithmatic_Main(char type);
int Algebraic_Main(char type);
int Quadratic_Solver(char b_type);
int Linear_Equation_System(char b_type);
float Finding_Adjugate_and_Solving(float determinant, float matrix[2][3]);
#endif //CALCULATORAPPLICATION_CALC_H
