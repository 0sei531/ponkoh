#include "monty.h"

/**
 * op_rotr - rotate all elements downward (right rotation)
 * @sp: stack pointer
 */

void op_rotr(stack_t **sp)
{
	 if (*sp && (*sp)->next)
    {
        *sp = (*sp)->prev;
    }
}
