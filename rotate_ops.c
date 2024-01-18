/* File Name: rotate_ops.c */

#include "monty.h"

/**
 * monty_rotl - Rotates the stack to the top.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void monty_rotl(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = *stack;

    UNUSED(line_number);

    if (temp && temp->next)
    {
        *stack = temp->next;
        temp->next->prev = NULL;

        while (temp->next)
            temp = temp->next;

        temp->next = temp;
    }
}

/**
 * monty_rotr - Rotates the stack to the bottom.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void monty_rotr(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = *stack;

    UNUSED(line_number);

    if (temp && temp->next)
    {
        while (temp->next->next)
            temp = temp->next;

        temp->next->prev = NULL;
        temp->next->next = *stack;
        *stack = temp->next;
    }
}
