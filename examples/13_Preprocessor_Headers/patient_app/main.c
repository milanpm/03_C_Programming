/*
 * File: main.c
 * Description: Demonstrates a patient application split into
 *              a header and separate source files.
 * Author: Alex
 * Date: 2026-09-14
 */

#include <stdio.h>

#include "patient.h"

int main(void)
{
    Patient patient = {
        .patient_id = 1001,
        .patient_name = "Alex",
        .modality = "CT"
    };

    printf("=== Patient Information ===\n");
    print_patient(&patient);

    printf("\n=== NULL Pointer Check ===\n");
    print_patient(NULL);

    return 0;
}
