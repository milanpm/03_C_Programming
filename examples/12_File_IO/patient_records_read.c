/*
 * File: patient_records_read.c
 * Description: Loads patient structure records from a CSV file.
 * Author: Alex
 * Date: 2026-09-11
 */

#include <stdio.h>

#define MAX_PATIENTS 10
#define LINE_SIZE 100

typedef struct
{
    char patient_id[10];
    char name[50];
    int age;
    char modality[10];
} Patient;

size_t load_patients(
    const char *filename,
    Patient patients[],
    size_t capacity
);

void print_patients(
    const Patient patients[],
    size_t count
);

int main(void)
{
    Patient patients[MAX_PATIENTS];
    size_t patient_count;

    patient_count = load_patients(
        "patient_records.csv",
        patients,
        MAX_PATIENTS
    );

    if (patient_count == 0)
    {
        fprintf(stderr, "No patient records were loaded.\n");
        return 1;
    }

    print_patients(patients, patient_count);

    return 0;
}

size_t load_patients(
    const char *filename,
    Patient patients[],
    size_t capacity
)
{
    FILE *file = fopen(filename, "r");
    char line[LINE_SIZE];
    size_t count = 0;

    if (file == NULL)
    {
        perror("Failed to open patient records file");
        return 0;
    }

    /* Skip the CSV header. */
    if (fgets(line, sizeof(line), file) == NULL)
    {
        fprintf(stderr, "Failed to read the CSV header.\n");
        fclose(file);
        return 0;
    }

    while (count < capacity &&
           fgets(line, sizeof(line), file) != NULL)
    {
        int fields_read = sscanf(
            line,
            "%9[^,],%49[^,],%d,%9[^\r\n]",
            patients[count].patient_id,
            patients[count].name,
            &patients[count].age,
            patients[count].modality
        );

        if (fields_read == 4)
        {
            count++;
        }
        else
        {
            fprintf(stderr, "Skipped invalid CSV row: %s", line);
        }
    }

    if (ferror(file))
    {
        perror("Failed to read patient records file");
    }

    if (fclose(file) != 0)
    {
        perror("Failed to close patient records file");
    }

    return count;
}

void print_patients(
    const Patient patients[],
    size_t count
)
{
    size_t index;

    printf("Loaded patient records: %zu\n", count);
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
