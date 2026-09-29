/*
 * File: patient.c
 * Day: 17 — Multi-File Programs and Build Automation
 * Date: 2026-09-29
 * Purpose: Read patient records from a CSV file and find a patient by ID.
 */

#include "patient.h"

#include <stdio.h>
#include <string.h>

int find_patient(const char *filename,
                 const char *target_id,
                 Patient *result)
{
    FILE *file;
    char line[256];

    if (filename == NULL || target_id == NULL || result == NULL) {
        return 1;
    }

    file = fopen(filename, "r");
    if (file == NULL) {
        perror(filename);
        return 1;
    }

    while (fgets(line, sizeof line, file) != NULL) {
        Patient current;

        if (sscanf(line, " %31[^,],%63[^,],%d",
                   current.id, current.name, &current.age) != 3) {
            continue;
        }

        if (strcmp(current.id, target_id) == 0) {
            *result = current;
            fclose(file);
            return 0;
        }
    }

    if (ferror(file)) {
        perror("Reading patient file");
    }

    fclose(file);
    return 1;
}
