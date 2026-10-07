/*
===============================================================================
File        : debug_sum.c
Project     : 03_C_Programming
Day         : 18
Topic       : Debugging Basics
Description :
    Trace the running total before and after each addition
    using printf debugging.

Learning Objectives :
    1. Understand statement execution order.
    2. Inspect variable values using printf.
    3. Distinguish assignment from accumulation.
    4. Compile with debugging information using -g.

Author      : Alex
Date        : 2026-10-07
===============================================================================
*/

#include <stdio.h>

int main(void)
{
    int scores[] = {80, 90, 100};
    int total = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("[BEFORE] i=%d, total=%d\n", i, total);

        total += scores[i];

        printf("[AFTER]  i=%d, total=%d\n", i, total);
    }

    printf("Total: %d\n", total);
    return 0;
}
