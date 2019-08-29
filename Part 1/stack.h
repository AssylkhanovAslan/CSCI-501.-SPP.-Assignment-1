#ifndef STACK_H_
#define STACK_H_

#include <stdlib.h>

typedef struct {
	size_t stack_size;
	size_t array_size;
	int *values;
} Stack;

// Creates a new empty stack on the heap
Stack* create_stack();

// Destroys the stack, and frees up its memory
void destroy_stack(Stack *stk);

// Adds the value val to the top of the stack
void push(Stack *stk, int val);

// Removes and returns the topmost item of the stack
int pop(Stack *stk);

// Returns the topmost item of the stack, without changing the stack
int peek_top(Stack *stk);

// Returns the number of items on the stack
size_t stack_size(Stack *stk);

// Removes all of the items from the stack
void clear_stack(Stack *stk);

// Outputs the items in the stack to the console window
void print_stack(Stack *stk);

#endif /* STACK_H_ */
