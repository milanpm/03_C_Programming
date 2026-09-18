/*
 * File: bit_fields.c
 * Description: Demonstrates compact Boolean flags using C bit fields.
 * Author: Alex
 * Date: 2026-09-18
 *
 * Learning objectives:
 * - Declare unsigned bit-field members.
 * - Store multiple Boolean flags compactly.
 * - Read and modify individual flags.
 * - Compare bit-field storage with ordinary integer fields.
 */

#include <stdio.h>

struct PatientFlags
{
    unsigned int is_registered : 1;
    unsigned int is_emergency  : 1;
    unsigned int has_allergy   : 1;
    unsigned int needs_followup : 1;
};

struct OrdinaryPatientFlags
{
    unsigned int is_registered;
    unsigned int is_emergency;
    unsigned int has_allergy;
    unsigned int needs_followup;
};

void print_flags(const struct PatientFlags *flags)
{
    printf("Registered:    %u\n", flags->is_registered);
    printf("Emergency:     %u\n", flags->is_emergency);
    printf("Has allergy:   %u\n", flags->has_allergy);
    printf("Needs followup: %u\n", flags->needs_followup);
}

int main(void)
{
    struct PatientFlags flags = {1, 0, 1, 0};

    printf("Initial patient flags:\n");
    print_flags(&flags);

    flags.is_emergency = 1;
    flags.needs_followup = 1;

    printf("\nUpdated patient flags:\n");
    print_flags(&flags);

    printf("\nStorage comparison:\n");
    printf("Bit-field structure: %zu bytes\n",
           sizeof(struct PatientFlags));
    printf("Ordinary structure:  %zu bytes\n",
           sizeof(struct OrdinaryPatientFlags));

    return 0;
}
