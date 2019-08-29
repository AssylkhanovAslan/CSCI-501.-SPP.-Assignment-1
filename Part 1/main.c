
#include <stdio.h>
#include "stack.h"

int main( int argc, char* argv[] )
{

	Stack *stack = create_stack();
    for (int i = 0; i < 15; ++i) {
        push(stack, i);
    }

    int check = peek_top(stack);
    printf("Checking the top. Value = %d\n", check);

    print_stack(stack);

    check = pop(stack);
	printf("Uno = %d\n", check);

    check = pop(stack);
    printf("Dos = %d\n", check);

    check = pop(stack);
    printf("Tres = %d\n", check);

    clear_stack(stack);
    print_stack(stack);

    destroy_stack(stack);

    //Prints gibberish after destroying the stack
    //print_stack(stack);
	return 0;
}
