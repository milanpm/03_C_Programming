/*
 * File: pointer_swap.c
 * Description: Demonstrates swapping two original variable values
 *              by passing their addresses to a function.
 * Author: Alex
 * Date: 2026-09-09
 */

#include <stdio.h>

void swap(int *first, int *second)
{
    int temporary = *first;

    *first = *second;
    *second = temporary;
}

int main(void)
{
    int first_number = 10;
    int second_number = 20;

    printf("Before swap\n");
    printf("first_number: %d\n", first_number);
    printf("second_number: %d\n", second_number);

    swap(&first_number, &second_number);

    printf("\nAfter swap\n");
    printf("first_number: %d\n", first_number);
    printf("second_number: %d\n", second_number);

    return 0;
}
