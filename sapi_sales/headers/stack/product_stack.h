//
// Created by Kati on 3/17/2022.
//

#ifndef ADATSZERKEZETEK_I_PRODUCT_STACK_H
#define ADATSZERKEZETEK_I_PRODUCT_STACK_H


#include <product.h>
#include <stdbool.h>

typedef  struct{
    unsigned  int capacity;//természetes szám, a verem maximális kapacitása
    int top;//verem mutató - egész szám, a verem tetejére mutat, kezdetben -1
    Product ** products;

}ProductStack;

void createProductStack(ProductStack ** productStack, unsigned int capacity);
void push(ProductStack *productStack,Product * product);
void pop(ProductStack *productStack);
Product *top(ProductStack *productStack);
bool stackIsEmpty(ProductStack* productStack);
bool stackIsFull(ProductStack * productStack);
void deleteProductStack(ProductStack ** pProductStack);

#endif //ADATSZERKEZETEK_I_PRODUCT_STACK_H
