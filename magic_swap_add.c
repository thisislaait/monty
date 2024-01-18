/* File Name: magic_swap_add.c */

#include "monty.h"

/**
 * monty_swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void monty_swap(stack_t **stack, unsigned int line_number)
{
    if (!stack || !*stack || !((*stack)->next))
    {
        short_stack_error(line_number, "swap");
    }

    swap_nodes(stack);
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

/**
 * pop - Removes the top element of the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void pop(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (stack == NULL || *stack == NULL)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = *stack;
    *stack = temp->next;
    if (*stack != NULL)
        (*stack)->prev = NULL;
    free(temp);
}
