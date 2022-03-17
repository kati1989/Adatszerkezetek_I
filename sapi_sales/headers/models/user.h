//
// Created by Kati on 2/23/2022.
//

#ifndef ADATSZERKEZETEK_I_USER_H
#define ADATSZERKEZETEK_I_USER_H

#include<stdlib.h>
#include "useful.h"
#include "errors.h"
#include "messages.h"

enum UserType{
    STUDENT,
    TEACHER,
};

enum Gender{
    MASCULIN,
    FEMININ,

};

enum Specialization{
    AUTOMATION,
    INFORMATICS,
    COMPUTER_TECHNOLOGY,
    TELECOMMUNICATION,
    MATHEMATICS_INFORMATICS,
};


typedef  struct{
    int ev;
    int honap;
    int nap;
}BirthDate;

typedef struct {
    long id;
    char name[50];
    enum UserType type;
    enum Gender gender;
    enum Specialization specialization;
    BirthDate birthDate;
}User;



char* getUserlype(enum UserType type);
char* getGender(enum Gender type);
char* getSpecialization(enum Specialization type);

void createUser(User** user);

void setUserData(
        User* user,
        char* name,
        enum UserType userType,
        enum Gender gender,
        enum Specialization specialization,
        //*********
        BirthDate birthDate);

void printUser(User* user, char* destination);
void deleteUser(User** user);

#endif //ADATSZERKEZETEK_I_USER_H
