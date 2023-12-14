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

    // Check if the stack is not empty
    if (*sp)
    {
        // Ensure proper stack connections
        (*sp)->next->prev = NULL;

        // Iterate through the stack and print characters
        for (p = *sp; p && isprint(p->n); p = p->prev)
        {
            fputc(p->n, stderr);
        }

        // Restore stack connections
        (*sp)->next->prev = *sp;
    }

    // Print a newline character to stderr
    fputc('\n', stderr);
}
