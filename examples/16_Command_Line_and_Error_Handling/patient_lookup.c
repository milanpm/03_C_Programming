/*
 * File: patient_lookup.c
 * Description: Searches a CSV patient file by patient ID using
 *              command-line arguments and structured error handling.
 * Author: Alex
 * Date: 2026-09-22
 */

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_SIZE 16
#define NAME_SIZE 64
#define LINE_SIZE 256

typedef struct
{
    char id[ID_SIZE];
    char name[NAME_SIZE];
    int age;
} Patient;

int main(int argc, char *argv[])
{
    FILE *file;
    Patient patient;
    char line[LINE_SIZE];
    int line_number = 0;
    int found = 0;

    if (argc != 3)
    {
        fprintf(stderr,
                "Usage: %s <patient_file> <patient_id>\n",
                argv[0]);

        return EXIT_FAILURE;
    }

    errno = 0;
    file = fopen(argv[1], "r");

    if (file == NULL)
    {
        fprintf(stderr,
                "Error: Could not open patient file '%s'.\n",
                argv[1]);
        fprintf(stderr, "Reason: %s\n", strerror(errno));

        return EXIT_FAILURE;
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        int fields_read;

        line_number++;

        fields_read = sscanf(line,
                             "%15[^,],%63[^,],%d",
                             patient.id,
                             patient.name,
                             &patient.age);

        if (fields_read != 3)
        {
            fprintf(stderr,
                    "Warning: Invalid record at line %d: %s",
                    line_number,
                    line);

            continue;
        }

        if (strcmp(patient.id, argv[2]) == 0)
        {
            printf("Patient found\n");
            printf("-------------\n");
            printf("ID   : %s\n", patient.id);
            printf("Name : %s\n", patient.name);
            printf("Age  : %d\n", patient.age);

            found = 1;
            break;
        }
    }

    if (ferror(file))
    {
        perror("Error while reading the patient file");
        fclose(file);

        return EXIT_FAILURE;
    }

    if (fclose(file) == EOF)
    {
        perror("Error while closing the patient file");
        return EXIT_FAILURE;
    }

    if (!found)
    {
        fprintf(stderr,
                "Error: Patient ID '%s' was not found.\n",
                argv[2]);

        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
