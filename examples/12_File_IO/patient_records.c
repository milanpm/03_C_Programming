/*
 * File: patient_records.c
 * Description: Saves patient structure records to a CSV file.
 * Author: Alex
 * Date: 2026-09-11
 */

#include <stdio.h>

#define PATIENT_COUNT 3

typedef struct
{
    char patient_id[10];
    char name[50];
    int age;
    char modality[10];
} Patient;

int save_patients(
    const char *filename,
    const Patient patients[],
    size_t count
);

int main(void)
{
    Patient patients[PATIENT_COUNT] = {
        {"P001", "Alex Kim", 50, "CT"},
        {"P002", "Jane Lee", 42, "MR"},
        {"P003", "David Park", 35, "XR"}
    };

    if (!save_patients("patient_records.csv",
                       patients,
                       PATIENT_COUNT))
    {
        return 1;
    }

    printf("%d patient records were saved successfully.\n",
           PATIENT_COUNT);

    return 0;
}

int save_patients(
    const char *filename,
    const Patient patients[],
    size_t count
)
{
    FILE *file = fopen(filename, "w");
    size_t index;

    if (file == NULL)
    {
        perror("Failed to open patient records file");
        return 0;
    }

    fprintf(file, "Patient ID,Name,Age,Modality\n");

    for (index = 0; index < count; index++)
    {
        fprintf(
            file,
            "%s,%s,%d,%s\n",
            patients[index].patient_id,
            patients[index].name,
            patients[index].age,
            patients[index].modality
        );
    }

    if (fclose(file) != 0)
    {
        perror("Failed to close patient records file");
        return 0;
    }

    return 1;
}
