//
// Created by Kati on 2/23/2022.
//

#include "messages.h"
void printDecsriptionMessage(enum LabType messageType){
    switch(messageType){
        case LAB2:
            printf("\n\n**************************************************************");
            printf("Testing basic user and product functionalities");
            printf("\n\n**************************************************************");
            break;
        case LAB3:
            printf("\n\n**************************************************************");
            printf("Testing  user with modified birthdate and userarray functionalities");
            printf("\n\n**************************************************************");
            break;

        default:
            printf("Undefined description\n");
            break;
    }


}

void printRunMessage(){
    printf("\nA kod futasa elkezdodott");


}

void printEndMessage(){
  printf("\nA kod futasa befejezodott");
}


