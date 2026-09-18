/*
 * File: patient_record.c
 * Description: Combines an enum, union, and bit fields in patient records.
 * Author: Alex
 * Date: 2026-09-18
 *
 * Learning objectives:
 * - Combine enum, union, struct, and bit-field types.
 * - Use an enum as a tag for the active union member.
 * - Store different examination result types efficiently.
 * - Represent patient state using compact Boolean flags.
 */

#include <stdio.h>

#define NAME_LENGTH 32

enum ResultType
{
    RESULT_AI_SCORE,
    RESULT_TEMPERATURE,
    RESULT_GRADE
};

union ResultValue
{
    int ai_score;
    float temperature;
    char grade;
};

struct PatientFlags
{
    unsigned int is_registered  : 1;
    unsigned int is_emergency   : 1;
    unsigned int has_allergy    : 1;
    unsigned int needs_followup : 1;
};

struct PatientRecord
{
    int patient_id;
    char name[NAME_LENGTH];
    enum ResultType result_type;
    union ResultValue result;
    struct PatientFlags flags;
};

void print_result(const struct PatientRecord *patient)
{
    switch (patient->result_type)
    {
        case RESULT_AI_SCORE:
            printf("Result:        AI score %d\n",
                   patient->result.ai_score);
            break;

        case RESULT_TEMPERATURE:
            printf("Result:        Temperature %.1f C\n",
                   patient->result.temperature);
            break;

        case RESULT_GRADE:
            printf("Result:        Grade %c\n",
                   patient->result.grade);
            break;

        default:
            printf("Result:        Unknown\n");
            break;
    }
}

void print_flags(const struct PatientFlags *flags)
{
    printf("Registered:    %s\n",
           flags->is_registered ? "Yes" : "No");
    printf("Emergency:     %s\n",
           flags->is_emergency ? "Yes" : "No");
    printf("Has allergy:   %s\n",
           flags->has_allergy ? "Yes" : "No");
    printf("Needs followup: %s\n",
           flags->needs_followup ? "Yes" : "No");
}

void print_patient_record(const struct PatientRecord *patient)
{
    printf("Patient ID:    %d\n", patient->patient_id);
    printf("Name:          %s\n", patient->name);

    print_result(patient);
    print_flags(&patient->flags);
}

int main(void)
{
    struct PatientRecord patients[] =
    {
        {
            1001,
            "Kim",
            RESULT_AI_SCORE,
            {.ai_score = 87},
            {1, 0, 1, 1}
        },
        {
            1002,
            "Lee",
            RESULT_TEMPERATURE,
            {.temperature = 36.7F},
            {1, 1, 0, 1}
        },
        {
            1003,
            "Park",
            RESULT_GRADE,
            {.grade = 'A'},
            {1, 0, 0, 0}
        }
    };

    const size_t patient_count =
        sizeof(patients) / sizeof(patients[0]);

    for (size_t i = 0; i < patient_count; ++i)
    {
        printf("Patient %zu\n", i + 1);
        print_patient_record(&patients[i]);
        printf("\n");
    }

    printf("Storage information:\n");
    printf("Size of ResultType:    %zu bytes\n",
           sizeof(enum ResultType));
    printf("Size of ResultValue:   %zu bytes\n",
           sizeof(union ResultValue));
    printf("Size of PatientFlags:  %zu bytes\n",
           sizeof(struct PatientFlags));
    printf("Size of PatientRecord: %zu bytes\n",
           sizeof(struct PatientRecord));

    return 0;
}
