/*
 * File: patient.c
 * Description: Implements the patient display function.
 * Author: Alex
 * Date: 2026-09-14
 */

#include <stdio.h>

#include "patient.h"

void print_patient(const Patient *patient)
{
    if (patient == NULL) {
        printf("Cannot display patient: NULL pointer.\n");
        return;
    }

    printf("Patient ID: %d\n", patient->patient_id);
    printf("Patient name: %s\n", patient->patient_name);
    printf("Modality: %s\n", patient->modality);
}
