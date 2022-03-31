#include <string.h>
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

void readUserArrayFromFile(UserArray *userArray, char* file) {
    FILE *f;
    int n;
    fscanf(f, "%i", &n );
    createUserArray(&userArray,n);
    f = fopen("users.txt", "r");
    for (int i=0;i<n;i++){
        User* user;
        createUser(&user);
        char name[20];
        fscanf(f,"%s",&name);
        char type[20];
        fscanf(f,"%s",&type);
        enum UserType userType;
        if (strcmp(type,"STUDENT")==0){//
            userType=STUDENT;
        } else {
            userType=TEACHER;
        }
        char gender[30];
        enum Gender genderType;
        fscanf(f,"%s",&gender);
        if (strcmp(type,"FEMININ")==0){
            genderType=FEMININ;
        } else {
            genderType=MASCULIN;
        }
        char specialization[30];
        enum Specialization specializationType;
        fscanf(f,"%s",&specialization);

        if (strcmp(type,"AUTOMATION")==0){
            specializationType=AUTOMATION;
        } else  if (strcmp(type,"INFORMATICS")==0){
            specializationType=INFORMATICS;
        } else  if (strcmp(type,"COMPUTER_TECHNOLOGY")==0){
            specializationType=COMPUTER_TECHNOLOGY;
        } else  if (strcmp(type,"TELECOMMUNICATION")==0){
            specializationType=TELECOMMUNICATION;
        } else  if (strcmp(type,"MATHEMATICS_INFORMATICS")==0){
            specializationType=MATHEMATICS_INFORMATICS;
        }
        int year,month,day;
        fscanf(f,"%i",&year);
        fscanf(f,"%i",&month);
        fscanf(f,"%i",&day);
        BirthDate birthDate;
        birthDate.ev=year;
        birthDate.honap=month;
        birthDate.nap=day;

        setUserData(user, name, userType, genderType, specializationType, birthDate);
    }

}