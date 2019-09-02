//
// Created by Assylkhanov Aslan on 29.08.2019.
//

#include <stdio.h>
#include "stack.h"


Stack* create_stack() {
    Stack *stk = (Stack*) malloc(sizeof(Stack));
    stk->top = NULL;
    stk->stack_size = 0;
}

// Destroys the Stack, and frees up its memory
void destroy_stack(Stack *stk) {
    Node *currentNode = stk->top;
    while (currentNode != NULL) {
        Node *toFree = currentNode;
        currentNode = currentNode ->link;
        toFree ->link = NULL;
        free(toFree);
    }
    stk->top = NULL;
    free(stk);
}

// Adds the value val to the top of the Stack
void push(Stack *stk, int val) {
    Node *node = (Node*) malloc(sizeof(Node));
    node->value = val;
    node->link = stk->top;
    stk->top = node;
    stk->stack_size++;
}

// Removes and returns the topmost item of the Stack
int pop(Stack *stk) {
    if (stk->top == NULL) {
        return -1;
    }
    Node *nodeToGetValueAndFree = stk->top;
    int value = nodeToGetValueAndFree->value;
    stk->top = nodeToGetValueAndFree->link;
    free(nodeToGetValueAndFree);
    stk->stack_size--;
    return value;
}

// Returns the topmost item of the Stack, without changing the Stack
int peek_top(Stack *stk) {
    if (stk->top == NULL) {
        return -1;
    }
    int value = stk->top->value;
    return value;
}

// Returns the number of items on the Stack
size_t stack_size(Stack *stk) {
    return stk->stack_size;
}

// Removes all of the items from the Stack
void clear_stack(Stack *stk) {
    Node *currentNode = stk->top;
    while (currentNode != NULL) {
        Node *toFree = currentNode;
        currentNode = currentNode ->link;
        toFree ->link = NULL;
        free(toFree);
    }
    stk->top = NULL;
    stk->stack_size = 0;
}

// Outputs the items in the Stack to the console window
void print_stack(Stack *stk) {
    Node *currentNode = stk->top;
    printf("Top[");
    while (currentNode != NULL) {
        printf("%d ", currentNode->value);
        currentNode = currentNode ->link;
    }
    printf("\n");
}

