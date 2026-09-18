/*
 * File: struct_vs_union.c
 * Description: Compares the memory layout of a structure and a union.
 * Author: Alex
 * Date: 2026-09-18
 *
 * Learning objectives:
 * - Compare the memory sizes of a struct and a union.
 * - Inspect the addresses of their members.
 * - Understand structure padding and union memory sharing.
 * - Identify when to use a struct or a union.
 */

#include <stdio.h>

struct PatientStruct
{
    int patient_id;
    float temperature;
    char grade;
};

union PatientUnion
{
    int patient_id;
    float temperature;
    char grade;
};

int main(void)
{
    struct PatientStruct patient_struct = {1001, 36.5F, 'A'};
    union PatientUnion patient_union;

    patient_union.patient_id = 1001;

    printf("Member sizes:\n");
    printf("sizeof(int)   = %zu bytes\n", sizeof(int));
    printf("sizeof(float) = %zu bytes\n", sizeof(float));
    printf("sizeof(char)  = %zu byte\n", sizeof(char));

    printf("\nContainer sizes:\n");
    printf("sizeof(struct PatientStruct) = %zu bytes\n",
           sizeof(struct PatientStruct));
    printf("sizeof(union PatientUnion)   = %zu bytes\n",
           sizeof(union PatientUnion));

    printf("\nStructure values:\n");
    printf("patient_id  = %d\n", patient_struct.patient_id);
    printf("temperature = %.1f\n", patient_struct.temperature);
    printf("grade       = %c\n", patient_struct.grade);

    printf("\nStructure member addresses:\n");
    printf("&patient_id  = %p\n",
           (void *)&patient_struct.patient_id);
    printf("&temperature = %p\n",
           (void *)&patient_struct.temperature);
    printf("&grade       = %p\n",
           (void *)&patient_struct.grade);

    printf("\nUnion member addresses:\n");
    printf("&patient_id  = %p\n",
           (void *)&patient_union.patient_id);
    printf("&temperature = %p\n",
           (void *)&patient_union.temperature);
    printf("&grade       = %p\n",
           (void *)&patient_union.grade);

    return 0;
}
