/*
 * File: structure_initialization.c
 * Description: Demonstrates structure initialization and safe
 *              modification of character array members.
 * Author: Alex
 * Date: 2026-09-10
 */

#include <stdio.h>
#include <string.h>

struct Patient
{
    int patient_id;
    char name[50];
    int age;
    double height;
};

int main(void)
{
    struct Patient patient1 = {
        1001,
        "Alex",
        50,
        180.0
    };

    struct Patient patient2 = {
        .patient_id = 1002,
        .name = "Kim",
        .age = 42,
        .height = 172.5
    };

    printf("Patient 1\n");
    printf("ID: %d\n", patient1.patient_id);
    printf("Name: %s\n", patient1.name);
    printf("Age: %d\n", patient1.age);
    printf("Height: %.1f cm\n\n", patient1.height);

    printf("Patient 2\n");
    printf("ID: %d\n", patient2.patient_id);
    printf("Name: %s\n", patient2.name);
    printf("Age: %d\n", patient2.age);
    printf("Height: %.1f cm\n\n", patient2.height);

    snprintf(patient2.name, sizeof(patient2.name), "%s", "Minjun");
    patient2.age = 43;

    printf("Updated Patient 2\n");
    printf("ID: %d\n", patient2.patient_id);
    printf("Name: %s\n", patient2.name);
    printf("Age: %d\n", patient2.age);
    printf("Height: %.1f cm\n", patient2.height);

    return 0;
}
