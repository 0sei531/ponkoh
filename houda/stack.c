#include "monty.h"

/**
 * op_stack - set stack mode to last-in first-out (default)
 * @sp: stack pointer
 */

void op_stack(stack_t **sp __attribute__((unused)))
{
	  op_env.mode = LIFO;
}

/**
 *  op_queue - set stack mode to first-in first-out
 *  @sp: stack pointer
 */

void op_queue(stack_t **sp __attribute__((unused)))
{
	op_env.mode = FIFO;
}
