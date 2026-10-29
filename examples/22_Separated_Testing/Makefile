# ===============================================================================
# File: Makefile
# Project: 03_C_Programming
# Day: 23
# Topic: Build and test automation with Make
# Description:
#     Automate compilation, linking, test execution, and cleanup.
# Learning Objectives:
#     Define targets, prerequisites, and recipes.
#     Rebuild files according to their dependencies.
#     Run tests and remove build artifacts with Make.
# Author: Alex
# Created Date: 2026-10-29
# Last Modified: 2026-10-29
# ===============================================================================

CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic

TARGET = age_validation_test.exe
OBJECTS = age_validation.o age_validation_test.o

.PHONY: all test clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

age_validation.o: age_validation.c age_validation.h
	$(CC) $(CFLAGS) -c age_validation.c -o age_validation.o

age_validation_test.o: age_validation_test.c age_validation.h
	$(CC) $(CFLAGS) -c age_validation_test.c -o age_validation_test.o

test: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)
