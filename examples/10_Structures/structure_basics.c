/*
 * File: structure_basics.c
 * Description: Demonstrates how to define a structure and access
 *              its members using the dot operator.
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

int main(void)
{
    struct Patient patient;

    patient.patient_id = 1001;
    patient.age = 50;
    patient.height = 180.0;

    printf("Patient ID: %d\n", patient.patient_id);
    printf("Age: %d\n", patient.age);
    printf("Height: %.1f cm\n", patient.height);

    return 0;
}
