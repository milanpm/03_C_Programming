/*
 * File: typedef_structure.c
 * Description: Demonstrates using typedef to create a concise name
 *              for a structure type.
 * Author: Alex
 * Date: 2026-09-10
 */

#include <stdio.h>
#include <string.h>

typedef struct
{
    int patient_id;
    char name[50];
    int age;
    double height;
} Patient;

Patient create_patient(
    int patient_id,
    const char *name,
    int age,
    double height
)
{
    Patient patient = {
        .patient_id = patient_id,
        .age = age,
        .height = height
    };

    snprintf(patient.name, sizeof(patient.name), "%s", name);

    return patient;
}

void print_patient(const Patient *patient)
{
    if (patient == NULL)
    {
        printf("Patient pointer is NULL.\n");
        return;
    }

    printf("Patient Information\n");
    printf("ID: %d\n", patient->patient_id);
    printf("Name: %s\n", patient->name);
    printf("Age: %d\n", patient->age);
    printf("Height: %.1f cm\n", patient->height);
}

void rename_patient(Patient *patient, const char *new_name)
{
    if (patient == NULL || new_name == NULL)
    {
        printf("Invalid argument.\n");
        return;
    }

    snprintf(
        patient->name,
        sizeof(patient->name),
        "%s",
        new_name
    );
}

int main(void)
{
    Patient patient = create_patient(
        1001,
        "Alex",
        50,
        180.0
    );

    printf("Before Rename\n");
    print_patient(&patient);

    rename_patient(&patient, "Alexander");

    printf("\nAfter Rename\n");
    print_patient(&patient);

    return 0;
}
