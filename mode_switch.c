/* File Name: mode_switch.c */

#include "monty.h"

/**
 * monty_stack - Sets the format of the data to a stack (LIFO).
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void monty_stack(stack_t **stack, unsigned int line_number)
{
    UNUSED(stack);
    UNUSED(line_number);
    SQ = STACK;
}

/**
 * monty_queue - Sets the format of the data to a queue (FIFO).
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void monty_queue(stack_t **stack, unsigned int line_number)
{
    UNUSED(stack);
    UNUSED(line);
}
