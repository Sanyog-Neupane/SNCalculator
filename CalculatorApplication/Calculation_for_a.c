#include "calc.h"
#include <math.h>
double answer( double ans, double num1, double num2, char operator) {
    if (operator == '+') {
        ans=num1+num2;
    }
    else if (operator == '-') {
        ans=num1-num2;
    }
    else if (operator == '*') {
        ans=num1*num2;
    }
    else if (operator=='2'){
        ans=num1*num1;
    }
    else {
        ans = sqrt(num1);
    }
return ans;
}
