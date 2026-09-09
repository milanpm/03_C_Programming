/*
 * File: pointer_basics.c
 * Description: Demonstrates declaring a pointer, storing a variable address,
 *              and accessing a value through dereferencing.
 * Author: Alex
 * Date: 2026-09-09
 */

#include <stdio.h>

int main(void)
{
    int number = 10;
    int *pointer = &number;

    printf("number value: %d\n", number);
    printf("number address: %p\n", (void *)&number);

    printf("\npointer value: %p\n", (void *)pointer);
    printf("value through pointer: %d\n", *pointer);
    printf("pointer address: %p\n", (void *)&pointer);

    return 0;
}
