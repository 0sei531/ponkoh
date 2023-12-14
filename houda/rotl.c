#include "monty.h"

/**
 * op_rotl - rotate all elements upward (left rotation)
 * @sp: stack pointer
 */

void op_rotl(stack_t **sp)
{
	 if (*sp && (*sp)->next)
    {
        *sp = (*sp)->next;
    }
}
