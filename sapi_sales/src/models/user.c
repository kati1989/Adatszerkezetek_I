//
// Created by Kati on 2/23/2022.
//
#include <mem.h>
#include <time.h>
#include "user.h"

char* getUserType(enum UserType type) {
    switch (type) {
        case STUDENT :
            return "Diak";
        case TEACHER:
            return "Tanar";
    }
}

char *getGender(enum Gender type) {
    switch (type) {
        case MASCULIN :
            return "Ferfi";

        case FEMININ:
            return "No";
    }
}

char *getSpecialization(enum Specialization type) {
    switch (type) {
        case AUTOMATION :
            return "AUTOMATION";
        case INFORMATICS:
            return "INFORMATICS";
        case COMPUTER_TECHNOLOGY:
            return "COMPUTER_TECHNOLOGY";
        case TELECOMMUNICATION:
            return "TELECOMMUNICATION";
        case MATHEMATICS_INFORMATICS:
            return "MATHEMATICS_INFORMATICS";
    }
}

void createUser(User **user) {
    *user = (User *) malloc(sizeof(User));
    if (!(*user)) {
        printErrorMessage(MEMORY_ALLOCATION);
    }
    srand(time(NULL));
    (*user)->birthDate.nap = rand()%30;
    (*user)->birthDate.honap =rand()%12;
    (*user)->birthDate.ev=1980 + rand()%20;
}

void setUserData(
        User *user,
        char *name,
        enum UserType userType,
        enum Gender gender,
        enum Specialization specialization,
        BirthDate birthDate) {
    strcpy(user->name, name);
    user->type = userType;
    user->gender = gender;
    user->specialization = specialization;
    user->type=userType;
    user->birthDate = birthDate;
}

void printUser(User *user) {
    if (user) {
        printf( "\n\t\tUser: %s\n", user->name);
        printf( "\t\tType: %s\n", getUserType(user->type));
        printf("\t\tGender: %s\n", getGender(user->gender));
        printf("\t\tSpetialization: %s\n", getSpecialization(user->specialization));
    } else {
        printf("is null");
    }
}

void deleteUser(User **user) {
    free(user);
}
