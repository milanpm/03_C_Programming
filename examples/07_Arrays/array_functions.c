/*
 * File: array_functions.c
 * Description: Demonstrates passing arrays to functions and calculating
 *              the sum, average, maximum, and minimum values.
 * Author: Alex
 * Date: 2026-09-07
 */

#include <stdio.h>

void print_array(const int numbers[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}

int calculate_sum(const int numbers[], int length)
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];
    }

    return sum;
}

int find_maximum(const int numbers[], int length)
{
    int maximum = numbers[0];

    for (int i = 1; i < length; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }

    return maximum;
}

int find_minimum(const int numbers[], int length)
{
    int minimum = numbers[0];

    for (int i = 1; i < length; i++)
    {
        if (numbers[i] < minimum)
        {
            minimum = numbers[i];
        }
    }

    return minimum;
}

int main(void)
{
    int scores[] = {85, 90, 78, 92, 88};
    int length = sizeof(scores) / sizeof(scores[0]);

    int sum = calculate_sum(scores, length);
    double average = (double)sum / length;

    printf("Scores: ");
    print_array(scores, length);

    printf("Total: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", find_maximum(scores, length));
    printf("Minimum: %d\n", find_minimum(scores, length));

    return 0;
}
