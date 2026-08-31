/*
 * File: comparison_operators.c
 * Day: C Programming Day 3
 * Description: Demonstrates relational and logical operators in C.
 *
 * Topics:
 * - Relational operators
 * - Logical operators
 * - Boolean-style results in C
 */

#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 5;

    printf("=== Relational Operators ===\n");
    printf("a = %d, b = %d\n\n", a, b);

    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    printf("\n=== Logical Operators ===\n");
    printf("(a > b) && (b > 0) : %d\n", (a > b) && (b > 0));
    printf("(a < b) || (b > 0) : %d\n", (a < b) || (b > 0));
    printf("!(a == b)          : %d\n", !(a == b));

    return 0;
}
