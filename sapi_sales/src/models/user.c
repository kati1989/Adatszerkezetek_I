//
// Created by Kati on 2/23/2022.
//
#include <mem.h>
#include "user.h"
#include <time.h>

char *getUserlype(enum UserType type) {
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

//void set(
//       BirthDate Date *userDate,
//       int ev,
//       int honap,
//       int nap){
//    strcpy(userDate->ev,ev);
//    userDate->honap=honap;
//    userDate->nap=nap;
//
//}

//void setUserData(
//        User *user,
//        char *name,
//        enum UserType userType,
//        enum Gender gender,
//        enum Specialization specialization,
//        int birthYear) {
//    strcpy(user->name, name);
//    user->userType = userType;
//    user->gender = gender;
//    user->specialization = specialization;
//    user->birthYear = birthYear;
//}

void printUser(User *user, char *destination) {
    if (user) {
        sprintf(destination, "User: %s\n", user->name);
        sprintf(destination, "\t\tType: %s\n", getUserlype(user->userType));
        sprintf(destination, "\t\tGender: %s\n", getGender(user->gender));
        sprintf(destination, "\t\tSpetialization: %s\n", getSpecialization(user->specialization));
        //sprintf(destination, "\t\tBirth Year: %d\n", getSpecialization(user->birthYear));
    } else {
        printf("is null");
    }
}

void deleteUser(User **user) {
    free(user);
}
