/*
 * File: dynamic_patients.c
 * Description: Manages patient records using a dynamic structure array.
 * Author: Alex
 * Date: 2026-09-11
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char patient_id[10];
    char name[50];
    int age;
    char modality[10];
} Patient;

void set_patient(
    Patient *patient,
    const char *patient_id,
    const char *name,
    int age,
    const char *modality
);

void print_patients(
    const Patient patients[],
    size_t count
);

int main(void)
{
    Patient *patients;
    size_t patient_count = 3;

    patients = calloc(patient_count, sizeof(*patients));

    if (patients == NULL)
    {
        fprintf(stderr, "Failed to allocate patient records.\n");
        return 1;
    }

    set_patient(&patients[0], "P001", "Alex Kim", 50, "CT");
    set_patient(&patients[1], "P002", "Jane Lee", 42, "MR");
    set_patient(&patients[2], "P003", "David Park", 35, "XR");

    print_patients(patients, patient_count);

    free(patients);
    patients = NULL;

    return 0;
}

void set_patient(
    Patient *patient,
    const char *patient_id,
    const char *name,
    int age,
    const char *modality
)
{
    snprintf(
        patient->patient_id,
        sizeof(patient->patient_id),
        "%s",
        patient_id
    );

    snprintf(
        patient->name,
        sizeof(patient->name),
        "%s",
        name
    );

    patient->age = age;

    snprintf(
        patient->modality,
        sizeof(patient->modality),
        "%s",
        modality
    );
}

void print_patients(
    const Patient patients[],
    size_t count
)
{
    size_t index;

    printf("Patient records: %zu\n", count);
    printf("----------------------------------------\n");

    for (index = 0; index < count; index++)
    {
        printf("Patient ID: %s\n", patients[index].patient_id);
        printf("Name:       %s\n", patients[index].name);
        printf("Age:        %d\n", patients[index].age);
        printf("Modality:   %s\n", patients[index].modality);
        printf("----------------------------------------\n");
    }
}