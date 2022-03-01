//
// Created by Kati on 2/23/2022.
//

#ifndef ADATSZERKEZETEK_I_ERRORS_H
#define ADATSZERKEZETEK_I_ERRORS_H

#include <stdlib.h>
#include <stdio.h>

enum ErrorType{
    MEMORY_ALLOCATION,
    FILE_NOT_FOUND,
    NULL_POINTER_EXCEPTION,
};

void printErrorMessage(enum ErrorType errorType);

#endif //ADATSZERKEZETEK_I_ERRORS_H
