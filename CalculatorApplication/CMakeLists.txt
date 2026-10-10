cmake_minimum_required(VERSION 4.2)
project(CalculatorApplication C)

set(CMAKE_C_STANDARD 11)

add_executable(CalculatorApplication main.c
        calc.h
        Calculation_for_a.c
        taking_input_for_a.c
        operator_validation_for_a.c
        Arithmatic_Main.c
        Algebraic_Main.c
        Quadratic_Solver.c
        Linear_Equation_System.c
        Finding_Adjugate_and_Solving.c
)
target_link_libraries(CalculatorApplication m)