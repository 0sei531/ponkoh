#include "monty.h"
#include <stdio.h>

/**
 * op_swap - swap the top two elements on the stack
 * @sp: stack pointer
 */

void op_swap(stack_t **sp)
{
	stack_t *p = *sp;

    // Check if the stack has at least two elements
    if (!(p && p != p->next))
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n", op_env.lineno);
        exit(EXIT_FAILURE);
    }

    // Swap the values using XOR operations
    p->n ^= p->prev->n;
    p->prev->n ^= p->n;
    p->n ^= p->prev->n;

}
