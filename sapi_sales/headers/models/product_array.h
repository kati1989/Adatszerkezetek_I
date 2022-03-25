//
// Created by Kati on 3/25/2022.
//

#ifndef ADATSZERKEZETEK_I_PRODUCT_ARRAY_H
#define ADATSZERKEZETEK_I_PRODUCT_ARRAY_H

#include <stdbool.h>
#include "product.h"

typedef struct {
    Product** products;
    int capacity;
    int numberOfProducts;
}ProductArray;

void createProductArray(ProductArray **productArray, unsigned  int maxProducts);
void deleteProductArray(ProductArray **productArray);
bool addNewProduct(ProductArray * productArray,Product * newProduct);
Product * getProductAtPosition(ProductArray*productArray,int position);


#endif //ADATSZERKEZETEK_I_PRODUCT_ARRAY_H
