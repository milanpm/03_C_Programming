/*
 * File: command_line_basics.c
 * Description: Demonstrates how to access command-line arguments
 *              using argc and argv.
 * Author: Alex
 * Date: 2026-09-22
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("Argument count: %d\n", argc);

    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}
