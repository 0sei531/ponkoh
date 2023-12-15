#include "monty.h"
#include <ctype.h>
#include <stdio.h>

/**
 * op_pstr - print the string starting from the top of the stack
 * @sp: stack pointer
 */

void op_pstr(stack_t **sp)
{
	stack_t *p = NULL;

    if (*sp)
    {
        (*sp)->next->prev = NULL;

        for (p = *sp; p && isprint(p->n); p = p->prev)
        {
            fputc(p->n, stderr);
        }

        (*sp)->next->prev = *sp;
    }

    fputc('\n', stderr);
}
