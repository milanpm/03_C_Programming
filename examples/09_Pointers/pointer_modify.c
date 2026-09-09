/*
 * File: pointer_modify.c
 * Description: Demonstrates modifying an original variable value
 *              through a pointer.
 * Author: Alex
 * Date: 2026-09-09
 */

#include <stdio.h>

int main(void)
{
    int number = 10;
    int *pointer = &number;

    printf("Before modification\n");
    printf("number: %d\n", number);
    printf("*pointer: %d\n", *pointer);

    *pointer = 25;

    printf("\nAfter modification\n");
    printf("number: %d\n", number);
    printf("*pointer: %d\n", *pointer);

    number = 50;

    printf("\nAfter changing number directly\n");
    printf("number: %d\n", number);
    printf("*pointer: %d\n", *pointer);

    return 0;
}
