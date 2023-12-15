#include "monty.h"
#include <stdio.h>

/**
 * op_div - divide the top two elements on the stack
 * @sp: stack pointer
 */

void op_div(stack_t **sp)
{
    int to_div;

    if (!(*sp && *sp != (*sp)->next))
    {
        fprintf(stderr, "L%lu: can't div, stack too short\n", (unsigned long)op_env.lineno);
    }

    to_div = (*sp)->n;

     if (!to_div)
    {
        fprintf(stderr, "L%lu: division by zero\n", (unsigned long)op_env.lineno);
        return;
    }

    op_pop(sp);

    (*sp)->n /= to_div;

}
