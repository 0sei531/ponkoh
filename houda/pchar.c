#include "monty.h"
#include <stdio.h>
#include <ctype.h>

/**
 * op_pchar - print the character at the top of the stack
 * @sp: stack pointer
 */

void op_pchar(stack_t **sp)
{
    if (*sp)
    {
        if ((*sp)->n >= 0 && (*sp)->n < 128)
        {
            printf("%c\n", isprint((*sp)->n) ? (*sp)->n : '?');
        }
        else
        {
            fprintf(stderr, "L%lu: can't pchar, value out of printable ASCII range\n", (unsigned long)op_env.lineno);
        }
    }
    else
    {
        fprintf(stderr, "L%lu: can't pchar, stack empty\n", (unsigned long)op_env.lineno);
    }
}
