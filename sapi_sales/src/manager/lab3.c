//
// Created by Kati on 3/9/2022.
//

#include "lab3.h"

void testUserFunctionalitiesLab3(){
    User *user1;

    createUser(&user1);

    printUser(user1,CON);

    deleteUser(&user1);

}

