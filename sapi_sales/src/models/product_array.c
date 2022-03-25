//
// Created by Kati on 3/25/2022.
//

#include "product_array.h"

void createProductArray(ProductArray** productArray, unsigned  int maxProducts){
    *productArray= malloc(sizeof(ProductArray));
    (**productArray).products= malloc(maxProducts*sizeof(Product*));
}

void deleteProductArray(ProductArray **productArray) {
    free(productArray);
}

bool addNewProduct(ProductArray* productArray, Product * newProduct){
    productArray->products[productArray->numberOfProducts]=newProduct;
    productArray->numberOfProducts++;
}

Product* getProductAtPosition(ProductArray* productArray, int position){
    return productArray->products[position];
}