
#ifndef STACK_H_
#define STACK_H_

#include <stdlib.h>

typedef struct _node {
	int value;
	struct _node *link;
} Node;

typedef struct {
	size_t stack_size;
	Node *top;
} Stack;


// Creates a new empty Stack on the heap
Stack* create_stack();

// Destroys the Stack, and frees up its memory
void destroy_stack(Stack *stk);

// Adds the value val to the top of the Stack
void push(Stack *stk, int val);

// Removes and returns the topmost item of the Stack
int pop(Stack *stk);

// Returns the topmost item of the Stack, without changing the Stack
int peek_top(Stack *stk);

// Returns the number of items on the Stack
size_t stack_size(Stack *stk);

// Removes all of the items from the Stack
void clear_stack(Stack *stk);

// Outputs the items in the Stack to the console window
void print_stack(Stack *stk);

#endif /* STACK_H_ */
