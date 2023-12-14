#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_pop - Removes the top element of the stack.
 * @sp: Double pointer to the head of the stack.
 */

void op_pop(stack_t **sp)
{
	stack_t *top = NULL;

    if (!*sp)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", op_env.lineno);
        exit(EXIT_FAILURE);
    }

    if (*sp != (*sp)->prev)
    {
        top = (*sp)->prev;
        (*sp)->next->prev = top;
        top->next = (*sp)->next;
    }

    free(*sp);
    *sp = top;
}
