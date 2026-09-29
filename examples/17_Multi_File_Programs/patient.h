/*
 * File: patient.h
 * Day: 17 — Multi-File Programs and Build Automation
 * Date: 2026-09-29
 * Purpose: Declare the patient data type and patient lookup function.
 */

#ifndef PATIENT_H
#define PATIENT_H

typedef struct {
    char id[32];
    char name[64];
    int age;
} Patient;

/* Returns 0 on success and a nonzero value on failure. */
int find_patient(const char *filename,
                 const char *target_id,
                 Patient *result);

#endif /* PATIENT_H */
