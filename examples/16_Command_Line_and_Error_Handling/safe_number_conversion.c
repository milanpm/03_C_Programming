/*
 * File: safe_number_conversion.c
 * Description: Safely converts a command-line argument to an integer
 *              using strtol() and validates the complete input.
 * Author: Alex
 * Date: 2026-09-22
 */

#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *end;
    long age;

    if (argc != 3)
    {
        fprintf(stderr,
                "Usage: %s <patient_name> <patient_age>\n",
                argv[0]);

        return EXIT_FAILURE;
    }

    errno = 0;
    end = NULL;

    age = strtol(argv[2], &end, 10);

    if (end == argv[2])
    {
        fprintf(stderr,
                "Error: Age must begin with a number: %s\n",
                argv[2]);

        return EXIT_FAILURE;
    }

    if (*end != '\0')
    {
        fprintf(stderr,
                "Error: Invalid characters found in age: %s\n",
                argv[2]);

        return EXIT_FAILURE;
    }

    if (errno == ERANGE || age < INT_MIN || age > INT_MAX)
    {
        fprintf(stderr,
                "Error: Age is outside the supported integer range: %s\n",
                argv[2]);

        return EXIT_FAILURE;
    }

    if (age < 0 || age > 150)
    {
        fprintf(stderr,
                "Error: Age must be between 0 and 150: %ld\n",
                age);

        return EXIT_FAILURE;
    }

    printf("Patient name: %s\n", argv[1]);
    printf("Patient age : %ld\n", age);

    return EXIT_SUCCESS;
}
