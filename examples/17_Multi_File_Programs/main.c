/*
 * File: main.c
 * Day: 17 — Multi-File Programs and Build Automation
 * Date: 2026-09-29
 * Purpose: Validate command-line arguments and display a patient record.
 */

#include "patient.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
    Patient patient;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s <csv-file> <patient-id>\n", argv[0]);
        return 1;
    }

    if (find_patient(argv[1], argv[2], &patient) != 0) {
        fprintf(stderr, "Patient lookup failed: %s\n", argv[2]);
        return 1;
    }

    printf("ID: %s\nName: %s\nAge: %d\n",
           patient.id, patient.name, patient.age);

    return 0;
}
