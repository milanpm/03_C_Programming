/*
 * File: calloc_basics.c
 * Description: Allocates and initializes memory using calloc.
 * Author: Alex
 * Date: 2026-09-11
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *scores;
    size_t count = 5;
    size_t index;

    scores = calloc(count, sizeof(*scores));

    if (scores == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    printf("Initial values allocated by calloc:\n");

    for (index = 0; index < count; index++)
    {
        printf("scores[%zu] = %d\n", index, scores[index]);
    }

    for (index = 0; index < count; index++)
    {
        scores[index] = (int)(80 + index * 3);
    }

    printf("\nUpdated score values:\n");

    for (index = 0; index < count; index++)
    {
        printf("scores[%zu] = %d\n", index, scores[index]);
    }

    free(scores);
    scores = NULL;

    return 0;
}