/*
 * File: preprocessor_basics.c
 * Description: Demonstrates constants, function-like macros,
 *              and conditional compilation.
 * Author: Alex
 * Date: 2026-09-14
 */

#include <stdio.h>

#define APP_NAME "Patient Study Tool"
#define MAX_PATIENTS 100
#define SQUARE(x) ((x) * (x))

int main(void)
{
    int value = 5;

    printf("Application: %s\n", APP_NAME);
    printf("Maximum patients: %d\n", MAX_PATIENTS);
    printf("SQUARE(value): %d\n", SQUARE(value));
    printf("SQUARE((2 + 3) * (2 + 3)): %d\n", SQUARE((2 + 3) * (2 + 3)));

#ifdef DEBUG
    printf("[DEBUG] Debug output is enabled.\n");
#endif

    return 0;
}
