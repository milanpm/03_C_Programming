/*
 * File: file_error_handling.c
 * Description: Opens a file supplied through the command line
 *              and reports library errors using errno and perror().
 * Author: Alex
 * Date: 2026-09-22
 */

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *file;
    char line[256];

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <file_path>\n", argv[0]);
        return EXIT_FAILURE;
    }

    errno = 0;
    file = fopen(argv[1], "r");

    if (file == NULL)
    {
        fprintf(stderr, "Error: Could not open '%s'.\n", argv[1]);
        fprintf(stderr, "Reason: %s\n", strerror(errno));

        return EXIT_FAILURE;
    }

    printf("Opened file: %s\n\n", argv[1]);

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    if (ferror(file))
    {
        perror("Error while reading the file");
        fclose(file);

        return EXIT_FAILURE;
    }

    if (fclose(file) == EOF)
    {
        perror("Error while closing the file");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
