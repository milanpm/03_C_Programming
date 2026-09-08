/*
 * C Programming Day 8
 * Topic: Safe String Input
 * File: string_input.c
 * Description:
 *     Reads a string safely with fgets() and removes
 *     the trailing newline character.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];

    printf("Enter your name: ");

    if (fgets(name, sizeof(name), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    name[strcspn(name, "\n")] = '\0';

    printf("Hello, %s!\n", name);
    printf("Name length: %zu\n", strlen(name));

    return 0;
}
