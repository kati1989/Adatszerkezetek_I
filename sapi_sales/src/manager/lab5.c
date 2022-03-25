//
// Created by Kati on 3/25/2022.
//

#include <stdio.h>
#include "lab5.h"
#include "../../headers/stack/product_stack.h"

void testUserFunctionalitiesLab5(){
    ProductStack *productStack;

    createProductStack(&productStack,10);

    int choice, i = 0;
    while (1) {
        printf("\n\n1. Push Operation\n");
        printf("2. Pop Operation\n");
        printf("3. Top Operation\n");
        printf("4. isEmpty operation\n");
        printf("5. isFull operation\n");
        printf("6. Exit\n");
        printf("Enter your choice of operations");
        scanf("%d",&choice);
        switch (choice) {
            case 1:{ }break;
            case 2:{}break;
            case 3:{}break;
            case 4:{}break;
            case 5:{}break;
            case 6:{return; }break;
        }
    }
}