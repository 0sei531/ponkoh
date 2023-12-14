#include "monty.h"
#include <stdio.h>
#include <ctype.h>

/**
 * op_pchar - print the character at the top of the stack
 * @sp: stack pointer
 */

void op_pchar(stack_t **sp)
{
	  // Check if the stack is not empty
    if (*sp)
    {
        // Check if the value is within the printable ASCII range
        if ((*sp)->n >= 0 && (*sp)->n < 128)
        {
            // Print the character (use '?' for non-printable characters)
            printf("%c\n", isprint((*sp)->n) ? (*sp)->n : '?');
        }
        else
        {
            // Print an error message for out-of-range values
            fprintf(stderr, "L%u: can't pchar, value out of printable ASCII range\n", op_env.lineno);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        // Print an error message for an empty stack
        fprintf(stderr, "L%u: can't pchar, stack empty\n", op_env.lineno);
        exit(EXIT_FAILURE);
    }
}
