//
// Created by Kati on 3/25/2022.
//

#include <stdio.h>
#include <string.h>
#include "lab5.h"

void testUserFunctionalitiesLab5() {
    ProductStack *productStack;
    createProductStack(&productStack, 10);
    int choice;
    while (1) {
        printf("\n\n1. Push Operation\n");
        printf("2. Pop Operation\n");
        printf("3. Top Operation\n");
        printf("4. isEmpty operation\n");
        printf("5. isFull operation\n");
        printf("6. Exit\n");
        printf("Enter your choice of operations");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {

                Product *product;
                createProduct(&product);
                printf("Product code:\n");
                char code[10];
                scanf("%s", code);
                printf("Product name:\n");
                char name[20];
                scanf("%s", name);
                printf("Product type FOOD or ITEM:\n");
                char type[20];
                enum ProductType productType;
                scanf("%s", type);
                if (strcmp(type, "FOOD") == 0) {
                    productType = FOOD;
                } else {
                    productType = ITEM;
                }
                printf("Product amount:\n");
                int amount;
                scanf("%i", &amount);
                time_t time = 0;
                setProductData(product, 0, code, name, FOOD, amount, time);
                push(productStack, product);
            } break;
            case 2: {
                pop(productStack);
                printf("Pop successfull!");
            } break;
            case 3: {
                Product *product =top(productStack);
                printProduct(product);
            } break;
            case 4: {
                if (stackIsEmpty(productStack)) printf("A verem ures.");
                else printf("A verem nem ures.");
            } break;
            case 5: {
                if (stackIsFull(productStack)) printf("A verem tele.");
                else printf("A verem nincs tele.");
            } break;
            case 6: {
                return;
            } break;
        }
    }
}