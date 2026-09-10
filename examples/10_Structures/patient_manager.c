/*
 * File: patient_manager.c
 * Description: Implements a simple patient registration and search
 *              program using structures, arrays, and functions.
 * Author: Alex
 * Date: 2026-09-10
 */

#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 10
#define NAME_LENGTH 50

typedef struct
{
    int patient_id;
    char name[NAME_LENGTH];
    int age;
    double height;
} Patient;

void print_patient(const Patient *patient)
{
    if (patient == NULL)
    {
        return;
    }

    printf(
        "%-6d %-12s %3d %6.1f cm\n",
        patient->patient_id,
        patient->name,
        patient->age,
        patient->height
    );
}

void print_all_patients(const Patient patients[], size_t count)
{
    if (patients == NULL || count == 0)
    {
        printf("No patients registered.\n");
        return;
    }

    printf("\nPatient List\n");
    printf("---------------------------------\n");
    printf("%-6s %-12s %3s %9s\n", "ID", "Name", "Age", "Height");
    printf("---------------------------------\n");

    for (size_t i = 0; i < count; i++)
    {
        print_patient(&patients[i]);
    }

    printf("---------------------------------\n");
}

const Patient *find_patient_by_id(
    const Patient patients[],
    size_t count,
    int patient_id
)
{
    if (patients == NULL)
    {
        return NULL;
    }

    for (size_t i = 0; i < count; i++)
    {
        if (patients[i].patient_id == patient_id)
        {
            return &patients[i];
        }
    }

    return NULL;
}

int add_patient(
    Patient patients[],
    size_t *count,
    int patient_id,
    const char *name,
    int age,
    double height
)
{
    if (patients == NULL || count == NULL || name == NULL)
    {
        return 0;
    }

    if (*count >= MAX_PATIENTS)
    {
        printf("Patient list is full.\n");
        return 0;
    }

    if (find_patient_by_id(patients, *count, patient_id) != NULL)
    {
        printf("Patient ID %d already exists.\n", patient_id);
        return 0;
    }

    Patient *new_patient = &patients[*count];

    new_patient->patient_id = patient_id;
    snprintf(
        new_patient->name,
        sizeof(new_patient->name),
        "%s",
        name
    );
    new_patient->age = age;
    new_patient->height = height;

    (*count)++;

    return 1;
}

int main(void)
{
    Patient patients[MAX_PATIENTS] = {0};
    size_t patient_count = 0;

    add_patient(patients, &patient_count, 1001, "Alex", 50, 180.0);
    add_patient(patients, &patient_count, 1002, "Minjun", 43, 172.5);
    add_patient(patients, &patient_count, 1003, "Jisoo", 37, 165.8);

    print_all_patients(patients, patient_count);

    int search_id;

    printf("\nEnter patient ID to search: ");

    if (scanf("%d", &search_id) != 1)
    {
        printf("Invalid patient ID.\n");
        return 1;
    }

    const Patient *found_patient = find_patient_by_id(
        patients,
        patient_count,
        search_id
    );

    if (found_patient == NULL)
    {
        printf("Patient ID %d was not found.\n", search_id);
    }
    else
    {
        printf("\nPatient Found\n");
        printf("---------------------------------\n");
        print_patient(found_patient);
    }

    return 0;
}
