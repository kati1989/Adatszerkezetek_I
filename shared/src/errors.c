//
// Created by Kati on 2/23/2022.
//
#include "errors.h"

void printErrorMessage(enum ErrorType errorType) {
    switch (errorType) {
        case MEMORY_ALLOCATION :
            printf("Hiba tortent a memoria foglalasban!");
            break;

        case FILE_NOT_FOUND:
            printf("A file nem talahato");
            break;

        case NULL_POINTER_EXCEPTION:
            printf("Null referencia hiba");
            break;
    }
}

/* MEMORY_ALLOCATION,

    NULL_POINTER_EXCEPTION,*/