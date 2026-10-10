//
// Created by sanyog-neupane on 9/14/26.
//
#include <stdio.h>
#include "calc.h"
#include <stdlib.h>
int Arithmatic_Main(char type) {
    char second_time;
    float num1=0, num2=0;
    float ans=0;
    char operator=' ',old_answer=' ';
    //For the first task.
    printf("Hello!\n");
    printf("Welcome to my calculator!\n");
    //Taking user input.
    taking_input_for_a(&num1,&num2);
    operator= operator_validation_for_a(operator);
    ans= answer(ans, num1, num2, operator);// This is the function.
    printf("The answer is: %f\n",ans);
    //Asking for second task:
    printf("Do you need to do another task?(y/n)");
    scanf(" %c",&second_time);
    second_time = (second_time);
    if (second_time == 'y') {
        printf("Do you need to use the answer from the last operation?");
        scanf(" %c",&old_answer);
        old_answer=(old_answer);
        while (old_answer== 'y') {
            char leave;
            num1=ans;
            printf("Enter second number:");
            scanf("%f",&num2);
            printf("Please enter the work that you want to do:\n");
            scanf(" %c",&operator);
            ans= answer(ans, num1, num2, operator);
            printf("The answer is: %f\n",ans);
            printf("Do you need to use the answer from the last operation?");
            scanf(" %c",&old_answer);
            printf("Do you want to exit?(y/n)");
            scanf("%c",&leave);
            if (leave== 'y') {
                exit(0);
            }
        }
        while (old_answer =='n') {
            taking_input_for_a(&num1, &num2);
            operator=operator_validation_for_a(operator);
            ans= answer(ans, num1, num2, operator);// This is the arithmatic operation.
            printf("The answer is: %f\n",ans);
            printf("Do you want to exit?(y/n)");
            scanf(" %c",&old_answer);

        }
        printf("Thanks for using my application! :)");
    }

    return 0;
}
