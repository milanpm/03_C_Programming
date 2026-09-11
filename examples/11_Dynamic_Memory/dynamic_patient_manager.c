/*
 * File: dynamic_patient_manager.c
 * Description: Adds patient records by resizing a dynamic structure array.
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

int add_patient(
    Patient **patients,
    size_t *count,
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
    Patient *patients = NULL;
    size_t patient_count = 0;

    if (!add_patient(
            &patients,
            &patient_count,
            "P001",
            "Alex Kim",
            50,
            "CT"))
    {
        free(patients);
        return 1;
    }

    if (!add_patient(
            &patients,
            &patient_count,
            "P002",
            "Jane Lee",
            42,
            "MR"))
    {
        free(patients);
        return 1;
    }

    if (!add_patient(
            &patients,
            &patient_count,
            "P003",
            "David Park",
            35,
            "XR"))
    {
        free(patients);
        return 1;
    }

    print_patients(patients, patient_count);

    free(patients);
    patients = NULL;

    return 0;
}

int add_patient(
    Patient **patients,
    size_t *count,
    const char *patient_id,
    const char *name,
    int age,
    const char *modality
)
{
    Patient *resized_patients;
    Patient *new_patient;
    size_t new_count = *count + 1;

    resized_patients = realloc(
        *patients,
        new_count * sizeof(**patients)
    );

    if (resized_patients == NULL)
    {
        fprintf(stderr, "Failed to resize patient records.\n");
        return 0;
    }

    *patients = resized_patients;
    new_patient = &(*patients)[*count];

    snprintf(
        new_patient->patient_id,
        sizeof(new_patient->patient_id),
        "%s",
        patient_id
    );

    snprintf(
        new_patient->name,
        sizeof(new_patient->name),
        "%s",
        name
    );

    new_patient->age = age;

    snprintf(
        new_patient->modality,
        sizeof(new_patient->modality),
        "%s",
        modality
    );

    *count = new_count;

    return 1;
}

void print_patients(
    const Patient patients[],
    size_t count
)
{
    size_t index;

    printf("Dynamic patient records: %zu\n", count);
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