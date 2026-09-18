/*
 * File: enum_status.c
 * Description: Demonstrates explicitly assigned enum values and switch logic.
 * Author: Alex
 * Date: 2026-09-18
 *
 * Learning objectives:
 * - Assign explicit integer values to enum constants.
 * - Pass an enum value to a function.
 * - Process enum values using a switch statement.
 * - Handle an invalid enum value with a default case.
 */

#include <stdio.h>

enum PatientStatus
{
    STATUS_REGISTERED = 10,
    STATUS_WAITING = 20,
    STATUS_IN_EXAMINATION = 30,
    STATUS_COMPLETED = 40,
    STATUS_CANCELLED = 50
};

void print_patient_status(enum PatientStatus status)
{
    switch (status)
    {
        case STATUS_REGISTERED:
            printf("Patient status: Registered\n");
            break;

        case STATUS_WAITING:
            printf("Patient status: Waiting\n");
            break;

        case STATUS_IN_EXAMINATION:
            printf("Patient status: In examination\n");
            break;

        case STATUS_COMPLETED:
            printf("Patient status: Completed\n");
            break;

        case STATUS_CANCELLED:
            printf("Patient status: Cancelled\n");
            break;

        default:
            printf("Patient status: Unknown\n");
            break;
    }
}

int main(void)
{
    enum PatientStatus current_status = STATUS_WAITING;

    printf("Registered value: %d\n", STATUS_REGISTERED);
    printf("Waiting value:    %d\n", STATUS_WAITING);
    printf("Completed value:  %d\n", STATUS_COMPLETED);

    printf("\n");
    print_patient_status(current_status);

    current_status = STATUS_IN_EXAMINATION;
    print_patient_status(current_status);

    current_status = STATUS_COMPLETED;
    print_patient_status(current_status);

    return 0;
}
