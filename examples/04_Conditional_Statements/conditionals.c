/*
 * File: conditionals.c
 * Date: 2026-09-01
 * Author: Alex
 *
 * Description:
 * Demonstrates conditional statements using if, else if, and else.
 * The program receives a score from the user, validates the input,
 * and assigns a letter grade based on the score.
 *
 * Topics:
 * - User input with scanf()
 * - Input validation
 * - Comparison and logical operators
 * - if, else if, and else statements
 */

#include <stdio.h>

int main(void)
{
    int score;

    printf("Enter your score (0-100): ");

    if (scanf("%d", &score) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (score < 0 || score > 100)
    {
        printf("Score must be between 0 and 100.\n");
        return 1;
    }
    else if (score >= 90)
    {
        printf("Grade: A\n");
    }
    else if (score >= 80)
    {
        printf("Grade: B\n");
    }
    else if (score >= 70)
    {
        printf("Grade: C\n");
    }
    else if (score >= 60)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    return 0;
}
