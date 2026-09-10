/*
 * File: structure_array.c
 * Description: Demonstrates storing multiple records in a structure
 *              array and processing them with loops.
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

    printf(
        "%-6d %-10s %3d %6.1f cm\n",
        patient->patient_id,
        patient->name,
        patient->age,
        patient->height
    );
}

double calculate_average_age(
    const struct Patient patients[],
    size_t count
)
{
    if (patients == NULL || count == 0)
    {
        return 0.0;
    }

    int total_age = 0;

    for (size_t i = 0; i < count; i++)
    {
        total_age += patients[i].age;
    }

    return (double)total_age / count;
}

int main(void)
{
    struct Patient patients[] = {
        {1001, "Alex", 50, 180.0},
        {1002, "Minjun", 43, 172.5},
        {1003, "Jisoo", 37, 165.8}
    };

    size_t patient_count = sizeof(patients) / sizeof(patients[0]);

    printf("Patient List\n");
    printf("-------------------------------\n");
    printf("%-6s %-10s %3s %9s\n", "ID", "Name", "Age", "Height");
    printf("-------------------------------\n");

    for (size_t i = 0; i < patient_count; i++)
    {
        print_patient(&patients[i]);
    }

    printf("-------------------------------\n");
    printf(
        "Patient count: %zu\n",
        patient_count
    );
    printf(
        "Average age: %.1f\n",
        calculate_average_age(patients, patient_count)
    );

    return 0;
}
