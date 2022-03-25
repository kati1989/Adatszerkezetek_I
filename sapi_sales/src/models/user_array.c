#include "user_array.h"

void createUserArray(UserArray** userArray, unsigned  int maxUsers){
    *userArray= malloc(sizeof(UserArray));
    (**userArray).users= malloc(maxUsers*sizeof(User*));
}

void deleteUserArray(UserArray **userArray) {
    free(userArray);
}

bool addNewUser(UserArray* userArray, User * newUser){
    userArray->users[userArray->numberOfUsers]=newUser;
    userArray->numberOfUsers++;
}

User* getUserAtPosition(UserArray* userArray, int position){
    return userArray->users[position];
}