//
// Created by Kati on 3/17/2022.
//

#include <malloc.h>
#include <errors.h>
#include <limits.h>
#include "../../headers/stack/product_stack.h"


void createProductProductStack(ProductStack **productProductStack, unsigned int capacity) {
    *productProductStack = (ProductStack *) malloc(sizeof(ProductStack));
    if (!(*productProductStack)) {
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (**productProductStack).capacity = capacity;
    (**productProductStack).top = -1;
    (**productProductStack).products = malloc(capacity * sizeof(Product* ));
}

// ProductStack is full when top is equal to the last index
bool stackIsFull( ProductStack *productProductStack) {
    return productProductStack->top == productProductStack->capacity - 1;
}

// ProductStack is empty when top is equal to -1
bool stackIsEmpty( ProductStack *productStack) {
    return productStack->top == -1;
}

// Function to add an item to stack.  It increases top by 1
void push(ProductStack *productStack,Product * product){
    if (stackIsFull(productStack))
        return;
    productStack->products[++productStack->top] = product;
}

// Function to remove an item from productStack.  It decreases top by 1
void pop(ProductStack *productStack) {
    if (!stackIsEmpty(productStack))
        productStack->top--;
    else printf("A verem ures");
}

// Function to remove an item from stack.  It decreases top by 1
Product* top(ProductStack *stack) {
    if (!stackIsEmpty(stack))
        return stack->products[stack->top];
    else return NULL;
}

void deleteProductProductStack(ProductStack **pProductStack) {
    free(pProductStack);
}
