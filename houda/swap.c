#include "monty.h"
#include <stdio.h>

/**
 * op_swap - swap the top two elements on the stack
 * @sp: stack pointer
 */

void op_swap(stack_t **sp)
{
	 int tmp;

    if (!(*sp && (*sp)->next))
    {
        fprintf(stderr, "L%lu: can't swap, stack too short\n", op_env.lineno);
        return;
    }

    tmp = (*sp)->n;
    (*sp)->n = (*sp)->next->n;
    (*sp)->next->n = tmp;
}
