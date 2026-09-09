/*
 * File: array_pointers.c
 * Description: Demonstrates accessing array elements using array indexing
 *              and pointer arithmetic.
 * Author: Alex
 * Date: 2026-09-09
 */

#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    int *pointer = numbers;
    size_t count = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array address: %p\n", (void *)numbers);
    printf("First element address: %p\n", (void *)&numbers[0]);
    printf("Pointer value: %p\n", (void *)pointer);

    printf("\nArray elements\n");

    for (size_t index = 0; index < count; index++)
    {
        printf(
            "Index %zu: numbers[%zu] = %d, *(pointer + %zu) = %d\n",
            index,
            index,
            numbers[index],
            index,
            *(pointer + index)
        );
    }

    return 0;
}
