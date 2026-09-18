/*
 * File: union_basics.c
 * Description: Demonstrates shared memory between union members.
 * Author: Alex
 * Date: 2026-09-18
 *
 * Learning objectives:
 * - Declare and use a union.
 * - Understand that union members share the same memory.
 * - Compare member sizes with the size of the union.
 * - Observe how writing one member affects the other members.
 */

#include <stdio.h>

union MedicalValue
{
    int patient_id;
    float temperature;
    char grade;
};

int main(void)
{
    union MedicalValue value;

    printf("Size of int:          %zu bytes\n", sizeof(int));
    printf("Size of float:        %zu bytes\n", sizeof(float));
    printf("Size of char:         %zu byte\n", sizeof(char));
    printf("Size of MedicalValue: %zu bytes\n", sizeof(union MedicalValue));

    value.patient_id = 1001;
    printf("\nAfter storing patient_id:\n");
    printf("patient_id = %d\n", value.patient_id);

    value.temperature = 36.5F;
    printf("\nAfter storing temperature:\n");
    printf("temperature = %.1f\n", value.temperature);

    value.grade = 'A';
    printf("\nAfter storing grade:\n");
    printf("grade = %c\n", value.grade);

    return 0;
}
