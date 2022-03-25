//
// Created by Kati on 2/23/2022.
//

#ifndef ADATSZERKEZETEK_I_PRODUCT_H
#define ADATSZERKEZETEK_I_PRODUCT_H

#include<stdlib.h>
#include <sys/types.h>
#include "useful.h"
#include "errors.h"
#include "messages.h"

enum ProductType{
    ITEM,
    FOOD
};

typedef struct {
    long id;
    char code[10];
    char name[20];
    enum ProductType type;
    int amount;
    time_t createdAt;
}Product;

char* getProductType(enum ProductType type);

void setProductData(
        Product *Product,
        long id,
        char* code,
        char* name,
        enum ProductType type,
        int amount,
        time_t createdAt);

void createProduct(Product** Product);
void printProduct(Product *Product);
void deleteProduct(Product** Product);

#endif //ADATSZERKEZETEK_I_PRODUCT_H
