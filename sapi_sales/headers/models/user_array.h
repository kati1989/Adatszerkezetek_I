//
// Created by Kati on 3/9/2022.
//

#ifndef ADATSZERKEZETEK_I_USER_ARRAY_H
#define ADATSZERKEZETEK_I_USER_ARRAY_H

typedef struct {
    User** users;
    int capacity;
    int numberOfUsers;
}USER_ARRAY;

void createUserArray(UserArray **userArray, unsigned  int maxUsers);


#endif //ADATSZERKEZETEK_I_USER_ARRAY_H
