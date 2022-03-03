//
// Created by Kati on 3/1/2022.
//

#include "lab2.h"

void testUserFunctionalities(){
    User *user1;

    createUser(&user1);

   // setUserData(user1, "Kis Erno", TEACHER,MASCULIN,MATHEMATICS_INFORMATICS,1980);
//****
    printUser(user1,CON);

    deleteUser(&user1);

}