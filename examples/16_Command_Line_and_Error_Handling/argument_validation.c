/*
 * File: argument_validation.c
 * Description: Validates the number of command-line arguments
 *              and reports usage errors through stderr.
 * Author: Alex
 * Date: 2026-09-22
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Error: Invalid number of arguments.\n");
        fprintf(stderr, "Usage: %s <patient_name> <patient_age>\n",
                argv[0]);

        return EXIT_FAILURE;
    }

    printf("Patient name: %s\n", argv[1]);
    printf("Patient age : %s\n", argv[2]);

    return EXIT_SUCCESS;
}
