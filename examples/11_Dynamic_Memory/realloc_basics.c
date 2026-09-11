/*
 * File: realloc_basics.c
 * Description: Resizes a dynamically allocated integer array.
 * Author: Alex
 * Date: 2026-09-11
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *numbers;
    int *resized_numbers;
    size_t original_count = 3;
    size_t new_count = 6;
    size_t index;

    numbers = malloc(original_count * sizeof(*numbers));

    if (numbers == NULL)
    {
        fprintf(stderr, "Initial memory allocation failed.\n");
        return 1;
    }

    for (index = 0; index < original_count; index++)
    {
        numbers[index] = (int)((index + 1) * 10);
    }

    resized_numbers = realloc(
        numbers,
        new_count * sizeof(*numbers)
    );

    if (resized_numbers == NULL)
    {
        fprintf(stderr, "Memory reallocation failed.\n");
        free(numbers);
        return 1;
    }

    numbers = resized_numbers;

    for (index = original_count; index < new_count; index++)
    {
        numbers[index] = (int)((index + 1) * 10);
    }

    printf("Resized array values:\n");

    for (index = 0; index < new_count; index++)
    {
        printf("numbers[%zu] = %d\n", index, numbers[index]);
    }

    free(numbers);
    numbers = NULL;

    return 0;
}