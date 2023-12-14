#include "monty.h"
#include <stdio.h>

/**
 * op_sub - subtract the top two elements on the stack
 * @sp: stack pointer
 */

void op_sub(stack_t **sp)
{
	int to_sub = 0;

    // Check if the stack has at least two elements
    if (!(*sp && *sp != (*sp)->next))
    {
        fprintf(stderr, "L%u: can't sub, stack too short\n", op_env.lineno);
        exit(EXIT_FAILURE);
    }

     // Store the value of the top element
    to_sub = (*sp)->n;

    // Remove the top element from the stack
    op_pop(sp);

    // Subtract the stored value from the new top element
    (*sp)->n -= to_sub;

}
