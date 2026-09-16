/*
 * File: patient_sort.c
 * Description: Sorts patient records using qsort and comparison callbacks.
 * Author: Alex
 * Date: 2026-09-16
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char name[32];
    int age;
} Patient;

int compare_by_age(const void *first, const void *second)
{
    const Patient *patient1 = first;
    const Patient *patient2 = second;

    if (patient1->age < patient2->age)
    {
        return -1;
    }

    if (patient1->age > patient2->age)
    {
        return 1;
    }

    return 0;
}

int compare_by_name(const void *first, const void *second)
{
    const Patient *patient1 = first;
    const Patient *patient2 = second;

    return strcmp(patient1->name, patient2->name);
}

void print_patients(
    const char *title,
    const Patient patients[],
    size_t count)
{
    printf("%s\n", title);

    for (size_t i = 0; i < count; i++)
    {
        printf(
            "ID: %d, Name: %-8s, Age: %d\n",
            patients[i].id,
            patients[i].name,
            patients[i].age);
    }

    printf("\n");
}

int main(void)
{
    Patient patients[] = {
        {1001, "Alex", 50},
        {1002, "Mina", 32},
        {1003, "David", 45},
        {1004, "Jina", 28}
    };

    size_t count = sizeof(patients) / sizeof(patients[0]);

    print_patients("Original order:", patients, count);

    qsort(
        patients,
        count,
        sizeof(patients[0]),
        compare_by_age);

    print_patients("Sorted by age:", patients, count);

    qsort(
        patients,
        count,
        sizeof(patients[0]),
        compare_by_name);

    print_patients("Sorted by name:", patients, count);

    return 0;
}
