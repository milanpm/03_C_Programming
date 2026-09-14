/*
 * File: file_append.c
 * Description: 기존 환자 정보 파일 끝에 검사 정보를 추가합니다.
 * Author: Alex
 * Date: 2026-09-14
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = fopen("patients.txt", "a");

    if (file == NULL)
    {
        perror("Failed to open patients.txt");
        return EXIT_FAILURE;
    }

    if (fprintf(file, "Study: Chest CT\n") < 0)
    {
        perror("Failed to append patient information");
        fclose(file);
        return EXIT_FAILURE;
    }

    if (fclose(file) == EOF)
    {
        perror("Failed to close patients.txt");
        return EXIT_FAILURE;
    }

    printf("Study information was appended to patients.txt.\n");

    return EXIT_SUCCESS;
}
