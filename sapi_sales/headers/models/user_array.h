//
// Created by Kati on 3/9/2022.
//

#ifndef ADATSZERKEZETEK_I_USER_ARRAY_H
#define ADATSZERKEZETEK_I_USER_ARRAY_H

#include "user.h"
#include<stdbool.h>

typedef struct {
    User** users;
    int capacity;
    int numberOfUsers;
}UserArray;

void createUserArray(UserArray **userArray, unsigned  int maxUsers);
void deleteUserArray(UserArray **userArray);
bool addNewUser(UserArray * userArray,User * newUser);
User * getUserAtPosition(UserArray*userArray,int position);
void readUserArrayFromFile(UserArray *userArray, char* file);


#endif //ADATSZERKEZETEK_I_USER_ARRAY_H
