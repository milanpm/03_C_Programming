/*
 * File: safe_division.c
 * Date: 2026-09-01
 * Author: Alex
 *
 * Description:
 * Demonstrates safe division using conditional statements.
 * The program receives two numbers, checks whether the denominator
 * is zero, and performs division only when it is safe.
 *
 * Topics:
 * - User input with scanf()
 * - Input validation
 * - Division using double values
 * - Preventing division by zero
 * - Error handling with return values
 */

#include <stdio.h>

int main(void)
{
    double numerator;
    double denominator;
    double result;

    printf("Enter the numerator: ");

    if (scanf("%lf", &numerator) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    printf("Enter the denominator: ");

    if (scanf("%lf", &denominator) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    if (denominator == 0.0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    result = numerator / denominator;

    printf("%.2f / %.2f = %.2f\n",
           numerator, denominator, result);

    return 0;
}
