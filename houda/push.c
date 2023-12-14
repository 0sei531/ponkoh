#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_push - push an element onto the stack
 * @sp: stack pointer
 */

void op_push(stack_t **sp)
{
	stack_t *new = NULL;
    const char *nstr = op_env.argv[1];

    // Check if the argument is an integer
    if (!(nstr && isinteger(nstr)))
    {
        fprintf(stderr, "L%u: usage: push integer\n", op_env.lineno);
        exit(EXIT_FAILURE);
    }

    // Allocate memory for the new element
    new = malloc(sizeof(*new));
    if (!new)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    // Set the value of the new element
    new->n = atoi(nstr);

    if (*sp)
    {
        // Insert the new element into the existing stack
        new->prev = (*sp);
        new->next = (*sp)->next;
        new->next->prev = new;
        (*sp)->next = new;

        // Update the stack pointer if operating in LIFO mode
        if (op_env.mode == LIFO)
            (*sp) = new;
    }
    else
    {
        // If the stack is empty, set the new element as the only element
        new->prev = new;
        new->next = new;
        (*sp) = new;
    }
}
