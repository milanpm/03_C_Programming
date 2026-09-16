/*
 * File: array_callback.c
 * Description: Applies callback functions to each element of an integer array.
 * Author: Alex
 * Date: 2026-09-16
 */

#include <stddef.h>
#include <stdio.h>

int double_value(int value)
{
    return value * 2;
}

int square_value(int value)
{
    return value * value;
}

void transform_array(
    const int input[],
    int output[],
    size_t size,
    int (*transform)(int))
{
    for (size_t i = 0; i < size; i++)
    {
        output[i] = transform(input[i]);
    }
}

void print_array(const char *label, const int values[], size_t size)
{
    printf("%s", label);

    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", values[i]);
    }

    printf("\n");
}

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5};
    int doubled[5];
    int squared[5];

    size_t count = sizeof(numbers) / sizeof(numbers[0]);

    transform_array(numbers, doubled, count, double_value);
    transform_array(numbers, squared, count, square_value);

    print_array("Original: ", numbers, count);
    print_array("Doubled:  ", doubled, count);
    print_array("Squared:  ", squared, count);

    return 0;
}
