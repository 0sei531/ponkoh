#include "monty.h"
#include <stdio.h>

/**
 * op_mod - calculate the modulo of the top two elements on the stack
 * @sp: stack pointer
 */

void op_mod(stack_t **sp)
{
	 unsigned long int to_mod = 0;

    if (!(*sp && *sp != (*sp)->next))
    {
        fprintf(stderr, "L%lu: can't mod, stack too short\n", (unsigned long)op_env.lineno);
    }

    to_mod = (*sp)->n;

    if (!to_mod)
    {
        fprintf(stderr, "L%lu: division by zero\n", (unsigned long)op_env.lineno);
    }

    /* Remove the top element from the stack
    op_pop(sp);*/

    /* Calculate the modulo of the new top element by the stored value
    (*sp)->n %= to_mod;*/
}
