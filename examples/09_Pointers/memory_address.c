/*
 * File: memory_address.c
 * Description: Demonstrates accessing and displaying variable values
 *              and memory addresses using the address-of operator.
 * Author: Alex
 * Date: 2026-09-09
 */

#include <stdio.h>

int main(void)
{
    int number = 10;
    double temperature = 23.5;
    char grade = 'A';

    printf("number value: %d\n", number);
    printf("number address: %p\n", (void *)&number);

    printf("\ntemperature value: %.1f\n", temperature);
    printf("temperature address: %p\n", (void *)&temperature);

    printf("\ngrade value: %c\n", grade);
    printf("grade address: %p\n", (void *)&grade);

    return 0;
}
