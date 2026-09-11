/*
 * File: malloc_basics.c
 * Description: Dynamically allocates memory for an integer array.
 * Author: Alex
 * Date: 2026-09-11
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *numbers;
    size_t count = 5;
    size_t index;

    numbers = malloc(count * sizeof(*numbers));

    if (numbers == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    for (index = 0; index < count; index++)
    {
        numbers[index] = (int)((index + 1) * 10);
    }

    printf("Dynamically allocated values:\n");

    for (index = 0; index < count; index++)
    {
        printf("numbers[%zu] = %d\n", index, numbers[index]);
    }

    free(numbers);
    numbers = NULL;

    return 0;
}