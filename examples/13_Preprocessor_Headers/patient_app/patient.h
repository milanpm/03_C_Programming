/*
 * File: patient.h
 * Description: Declares the patient structure and display function.
 * Author: Alex
 * Date: 2026-09-14
 */

#ifndef DAY13_PATIENT_H
#define DAY13_PATIENT_H

#define PATIENT_NAME_SIZE 64
#define MODALITY_SIZE 8

typedef struct {
    int patient_id;
    char patient_name[PATIENT_NAME_SIZE];
    char modality[MODALITY_SIZE];
} Patient;

void print_patient(const Patient *patient);

#endif
