/* File Name: magic_swap_add.c */

#include "monty.h"

/**
 * monty_swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void monty_swap(stack_t **stack, unsigned int line_number)
{
    /* Implementation of swap */
}

/**
 * monty_add - adds the top two elements of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number of the opcode in the Monty bytecodes file
 */
void monty_add(stack_t **stack, unsigned int line_number)
{
    if (!stack || !*stack || !((*stack)->next))
    {
        short_stack_error(line_number, "add");
    }

    (*stack)->next->n += (*stack)->n;
    pop_node(stack);
}


/**
 * monty_nop - Does nothing.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void monty_nop(stack_t **stack, unsigned int line_number)
{
    UNUSED(stack);
    UNUSED(line_number);
    /* Do nothing */
}
