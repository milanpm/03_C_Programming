/*
 * File: function_calculator.c
 * Description: Demonstrates functions, parameters, return values,
 *              input validation, and safe integer calculations.
 * Author: Alex
 * Date: 2026-09-07
 */

#include <stdio.h>

// Function prototypes
int read_integer(const char prompt[], int *value);
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b, double *result);

int main(void)
{
    int first;
    int second;
    double quotient;

    if (!read_integer("Enter the first integer: ", &first))
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (!read_integer("Enter the second integer: ", &second))
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\nResults\n");
    printf("%d + %d = %d\n", first, second, add(first, second));
    printf("%d - %d = %d\n", first, second, subtract(first, second));
    printf("%d * %d = %d\n", first, second, multiply(first, second));

    if (divide(first, second, &quotient))
    {
        printf("%d / %d = %.2f\n", first, second, quotient);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}

int read_integer(const char prompt[], int *value)
{
    int ch;

    printf("%s", prompt);

    if (scanf("%d", value) != 1)
    {
        while ((ch = getchar()) != '\n' && ch != EOF)
        {
            // Discard invalid input
        }

        return 0;
    }

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        // Discard remaining characters
    }

    return 1;
}

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

int divide(int a, int b, double *result)
{
    if (b == 0)
    {
        return 0;
    }

    *result = (double)a / b;
    return 1;
}
