/*
 * File: pointer_analyzer.c
 * Description: Demonstrates returning multiple calculation results
 *              from a function through pointer parameters.
 * Author: Alex
 * Date: 2026-09-09
 */

#include <stdio.h>

void analyze_numbers(
    int first,
    int second,
    int *sum,
    int *difference,
    int *product
)
{
    *sum = first + second;
    *difference = first - second;
    *product = first * second;
}

int main(void)
{
    int first_number;
    int second_number;
    int sum;
    int difference;
    int product;

    printf("Enter two integers: ");

    if (scanf("%d %d", &first_number, &second_number) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    analyze_numbers(
        first_number,
        second_number,
        &sum,
        &difference,
        &product
    );

    printf("\nAnalysis results\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    return 0;
}
