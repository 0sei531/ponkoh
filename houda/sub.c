#include "monty.h"
#include <stdio.h>

/**
 * op_sub - subtract the top two elements on the stack
 * @sp: stack pointer
 */

void op_sub(stack_t **sp)
{
	int to_sub = 0;

    if (!(*sp && *sp != (*sp)->next))
    {
        fprintf(stderr, "L%lu: can't sub, stack too short\n", (unsigned long)op_env.lineno);
    }

    to_sub = (*sp)->n;

    op_pop(sp);

    (*sp)->n -= to_sub;

}
