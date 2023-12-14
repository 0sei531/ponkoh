#include "monty.h"
#include <stdio.h>

/**
 * op_mul - multiply the top two elements on the stack
 * @sp: stack pointer
 */

void op_mul(stack_t **sp)
{
	 int to_mul = 0;

    // Check if the stack has at least two elements
    if (!(*sp && *sp != (*sp)->next))
    {
        fprintf(stderr, "L%u: can't mul, stack too short\n", op_env.lineno);
        exit(EXIT_FAILURE);
    }

    // Store the value of the top element
    to_mul = (*sp)->n;

    // Remove the top element from the stack
    op_pop(sp);

    // Multiply the new top element by the stored value
    (*sp)->n *= to_mul;
}
