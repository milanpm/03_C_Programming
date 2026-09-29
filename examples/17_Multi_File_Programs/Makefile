# File: Makefile
# Day: 17 — Multi-File Programs and Build Automation
# Date: 2026-09-29
# Purpose: Build and clean the multi-file patient lookup program.

CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic
TARGET = patient_lookup.exe

$(TARGET): main.o patient.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o patient.o

main.o: main.c patient.h
	$(CC) $(CFLAGS) -c main.c

patient.o: patient.c patient.h
	$(CC) $(CFLAGS) -c patient.c

.PHONY: clean
clean:
	rm -f main.o patient.o $(TARGET)
