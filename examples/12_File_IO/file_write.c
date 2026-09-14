/*
 * File: file_write.c
 * Description: Creates a text file and saves patient information.
 * Author: Alex
 * Date: 2026-09-11
 */

#include <stdio.h>

int main(void)
{
    FILE *file = fopen("patients.txt", "w");

    if (file == NULL)
    {
        perror("Failed to open patients.txt");
        return 1;
    }

    fprintf(file, "Patient ID: P001\n");
    fprintf(file, "Name: Alex Kim\n");
    fprintf(file, "Age: 50\n");
    fprintf(file, "Modality: CT\n");

    if (fclose(file) != 0)
    {
        perror("Failed to close patients.txt");
        return 1;
    }

    printf("Patient information was saved to patients.txt.\n");

    return 0;
}
