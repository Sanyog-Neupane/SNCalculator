//
// Created by sanyog-neupane on 9/14/26.
//
#include <stdio.h>
#include <complex.h>
#include <math.h>
#include "calc.h"
int Quadratic_Solver(char b_type) {
    double a, b, c;
    printf("Enter the coefficients of the terms when the equation is in ax^2+bx+c form: ");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    if (a ==0 ) {
        printf("a cannot be 0 in a quadratic equation.");
        return 1;
    }
    double discriminant = (b * b - (4 * a * c));
    if (discriminant == 0) {
        double root1= -b/(2*a);
        printf("The equation has two equal roots.");
        printf("The roots are both: %.2lf\n",root1);
    }
    else if (discriminant >0) {
        double root1= ((-b+ sqrt(b*b-4*a*c))/2*a);
        double root2= ((-b -sqrt(b*b-4*a*c))/2*a);
        printf("The equation has two distinct roots.\n");
        printf("         _______\n");
        printf(" x= -b\u00B1 √b\u00B2-4ac\n");
        printf("First root is: %.2lf\n",root1);
        printf("Second root is: %.2lf\n",root2);
    }
    else {
        double real_part= -b/(2*a);
        double complex in_imaginary_form=(csqrt (discriminant+0.0*I));
        double complex imaginary_part= in_imaginary_form/ (2*a);
        double imaginary_part_extracted= cimag(imaginary_part);
        printf("The equation has two distinct imaginary roots.");
        printf("The first root is: %.2lf + √%.2lfi\n",real_part, (imaginary_part_extracted));
        printf("The second root is: %.2lf - √%.2lfi\n",real_part, (imaginary_part_extracted));
    }
return 0;
}