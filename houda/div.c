#include "monty.h"
#include <stdio.h>

/**
 * op_div - divide the top two elements on the stack
 * @sp: stack pointer
 */

void op_div(stack_t **sp)
{
	 int to_div = 0;

    // Check if the stack has at least two elements
    if (!(*sp && *sp != (*sp)->next))
    {
        fprintf(stderr, "L%u: can't div, stack too short\n", op_env.lineno);
        exit(EXIT_FAILURE);
    }

    // Store the value of the top element
    to_div = (*sp)->n;

    // Check for division by zero
    if (!to_div)
    {
        fprintf(stderr, "L%u: division by zero\n", op_env.lineno);
        exit(EXIT_FAILURE);
    }

    // Remove the top element from the stack
    op_pop(sp);

    // Divide the new top element by the stored value
    (*sp)->n /= to_div;
}
