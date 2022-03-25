//
// Created by Kati on 3/9/2022.
//

#include <user_array.h>
#include "lab3.h"

void testUserFunctionalitiesLab3(){
    User *user1, *user2;

    createUser(&user1);
    createUser(&user2);

    BirthDate birthDate;
    birthDate.ev=1989;
    setUserData(user1,"Kovacs Katalin", STUDENT,FEMININ, INFORMATICS, birthDate);
    setUserData(user2,"Sipos Gyula", STUDENT,MASCULIN, INFORMATICS, birthDate);

    printUser(user1);

    UserArray *pUserArray = NULL;
    createUserArray(&pUserArray,10);
    addNewUser(pUserArray,user1);
    addNewUser(pUserArray,user2);

    User*  userFromArray = getUserAtPosition(pUserArray,1);

    printUser(userFromArray);
    deleteUser(&user1);
}

