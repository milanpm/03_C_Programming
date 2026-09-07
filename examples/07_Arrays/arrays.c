/*
 * File: arrays.c
 * Description: Demonstrates array declaration, initialization, traversal,
 *              indexing, and total and average calculations.
 * Author: Alex
 * Date: 2026-09-07
 */

#include <stdio.h>

int main(void)
{
    int scores[] = {85, 90, 78, 92, 88};
    int length = sizeof(scores) / sizeof(scores[0]);
    int sum = 0;

    printf("Student scores\n");
    printf("--------------\n");

    for (int i = 0; i < length; i++)
    {
        printf("Student %d: %d\n", i + 1, scores[i]);
        sum += scores[i];
    }

    double average = (double)sum / length;

    printf("--------------\n");
    printf("Total: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
