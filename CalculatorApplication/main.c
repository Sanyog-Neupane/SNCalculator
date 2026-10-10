#include <stdio.h>
#include "calc.h"
#include <stdlib.h>
int main() {
    char type;
    printf("Enter a for arithmetic and b for algebraic calculations: ");
    scanf(" %c",&type);
    if (type == 'a') {
        Arithmatic_Main(type);
    }
    else if (type =='b') {
        Algebraic_Main(type);
    }
    else {
        printf("Invalid Input!");
    }
    return 0;
}
