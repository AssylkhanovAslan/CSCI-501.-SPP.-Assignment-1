
#include <stdio.h>
#include "stack.h"

int main( int argc, char* argv[] )
{

	Stack *stack = create_stack();
    for (int i = 0; i < 30; ++i) {
        push(stack, i);
    }
    print_stack(stack);
    printf("Stack size = %d\n", stack_size(stack));

    int check = peek_top(stack);
    printf("Checking the top. Value = %d\n", check);

    check = pop(stack);
	printf("Uno = %d\n", check);

    check = pop(stack);
    printf("Dos = %d\n", check);

    check = pop(stack);
    printf("Tres = %d\n", check);

    //TODO: Clear stack is not working correctly
   // clear_stack(stack);

    printf("Stack size = %d\n", stack_size(stack));
    print_stack(stack);

    //TODO: Destroy stack is not working correctly
    //destroy_stack(stack);

    //Prints gibberish after destroying the stack
    //print_stack(stack);
	return 0;
}
