#include "monty.h"
#include <stdio.h>

/**
 * op_mul - multiply the top two elements on the stack
 * @sp: stack pointer
 */

void op_mul(stack_t **sp)
{
	if (!(*sp && (*sp)->next))
    {
        fprintf(stderr, "L%lu: can't mul, stack too short\n", op_env.lineno);
        return;
    }

    (*sp)->next->n *= (*sp)->n;
    op_pop(sp);
}
