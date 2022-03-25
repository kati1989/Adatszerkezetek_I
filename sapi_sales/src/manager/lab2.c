//
// Created by Kati on 3/1/2022.
//

#include "lab2.h"

void testUserFunctionalities(){
    User *user1;

    createUser(&user1);
    printUser(user1);

    deleteUser(&user1);

}