/*
 * File: structure_pointer.c
 * Description: Demonstrates structure pointers and member access
 *              using the arrow operator.
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

void print_patient(const struct Patient *patient)
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

void update_patient(struct Patient *patient, int age, double height)
{
    if (patient == NULL)
    {
        printf("Patient pointer is NULL.\n");
        return;
    }

    patient->age = age;
    patient->height = height;
}

int main(void)
{
    struct Patient patient = {
        .patient_id = 1001,
        .name = "Alex",
        .age = 50,
        .height = 180.0
    };

    struct Patient *patient_ptr = &patient;

    printf("Before Update\n");
    print_patient(patient_ptr);

    update_patient(patient_ptr, 51, 180.5);

    printf("\nAfter Update\n");
    print_patient(patient_ptr);

    printf("\nMember Access Comparison\n");
    printf("Using dot: %s\n", patient.name);
    printf("Using arrow: %s\n", patient_ptr->name);
    printf("Using dereference and dot: %s\n", (*patient_ptr).name);

    return 0;
}
