/*
 * File: structure_functions.c
 * Description: Demonstrates passing structures to functions and
 *              returning structures from functions.
 * Author: Alex
 * Date: 2026-09-10
 */

#include <stdio.h>

struct Patient
{
    int patient_id;
    char name[50];
    int age;
    double height;
};

void print_patient(struct Patient patient)
{
    printf("Patient Information\n");
    printf("ID: %d\n", patient.patient_id);
    printf("Name: %s\n", patient.name);
    printf("Age: %d\n", patient.age);
    printf("Height: %.1f cm\n", patient.height);
}

struct Patient create_patient(
    int patient_id,
    const char *name,
    int age,
    double height
)
{
    struct Patient patient = {
        .patient_id = patient_id,
        .age = age,
        .height = height
    };

    snprintf(patient.name, sizeof(patient.name), "%s", name);

    return patient;
}

int main(void)
{
    struct Patient patient = create_patient(
        1001,
        "Alex",
        50,
        180.0
    );

    print_patient(patient);

    return 0;
}
