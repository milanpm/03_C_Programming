/*
 * File: calculator_callback.c
 * Description: Demonstrates calculator operations using callback functions.
 * Author: Alex
 * Date: 2026-09-16
 */

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int calculate(int a, int b, int (*operation)(int, int))
{
    return operation(a, b);
}

int main(void)
{
    int first = 10;
    int second = 3;

    printf("Addition: %d\n", calculate(first, second, add));
    printf("Subtraction: %d\n", calculate(first, second, subtract));
    printf("Multiplication: %d\n", calculate(first, second, multiply));

    return 0;
}
