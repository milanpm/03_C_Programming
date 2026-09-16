/*
 * File: function_pointer_basics.c
 * Description: Demonstrates basic function pointer declaration,
 *              assignment, and invocation in C.
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

int main(void)
{
    int (*operation)(int, int);

    operation = add;
    printf("10 + 3 = %d\n", operation(10, 3));

    operation = subtract;
    printf("10 - 3 = %d\n", operation(10, 3));

    return 0;
}
