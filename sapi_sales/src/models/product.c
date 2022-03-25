//
// Created by Kati on 2/23/2022.
//
#include "product.h"

#include <mem.h>
#include <time.h>
#include "Product.h"

char* getProductType(enum ProductType type) {
    switch (type) {
        case ITEM :
            return "Item";
        case FOOD:
            return "Food";
    }
}


void createProduct(Product **product) {
    *product = (Product *) malloc(sizeof(Product));
    if (!(*product)) {
        printErrorMessage(MEMORY_ALLOCATION);
    }
}

void setProductData(
        Product *product,
        long id,
        char* code,
        char* name,
        enum ProductType type,
        int amount,
        time_t createdAt) {
    strcpy(product->name, name);
    product->id=id;
    strcpy(product->code,code);
    product->type =type;
    product->amount=amount;
    product->createdAt=createdAt;
}

void printProduct(Product *product) {
    if (product) {
        printf( "\n\t\tProduct: %s\n", product->name);
        printf( "\t\tCode: %s\n", product->code);
        printf( "\t\tType: %s\n", getProductType(product->type));
        printf("\t\tAmount: %i\n", product->amount);
    } else {
        printf("is null");
    }
}

void deleteProduct(Product **product) {
    free(product);
}


