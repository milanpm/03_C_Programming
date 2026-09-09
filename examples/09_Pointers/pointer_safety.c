/*
 * File: pointer_safety.c
 * Description: Demonstrates initializing a pointer with NULL
 *              and checking it before dereferencing.
 * Author: Alex
 * Date: 2026-09-09
 */

#include <stdio.h>

int main(void)
{
    int number = 100;
    int *pointer = NULL;

    if (pointer == NULL)
    {
        printf("The pointer does not point to a valid object.\n");
    }

    pointer = &number;

    if (pointer != NULL)
    {
        printf("\nThe pointer is now valid.\n");
        printf("Address: %p\n", (void *)pointer);
        printf("Value: %d\n", *pointer);
    }

    pointer = NULL;

    if (pointer == NULL)
    {
        printf("\nThe pointer has been reset to NULL.\n");
    }

    return 0;
}
