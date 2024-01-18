/* File Name: char_string_ops.c */

#include "monty.h"
#include <ctype.h>

#define PCHAR_ERROR 2

/**
 * monty_pchar - Prints the char at the top of the stack, followed by a new line.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void monty_pchar(stack_t **stack, unsigned int line_number)
{
    if (!stack || !*stack)
    {
        fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
        set_op_tok_error(PCHAR_ERROR);
    }

    if (!isascii((*stack)->n))
    {
        fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
        set_op_tok_error(PCHAR_ERROR);
    }

    putchar((*stack)->n);
    putchar('\n');
}

/**
 * monty_pstr - Prints the string
 * starting at the top of the stack
 * followed by a new line.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode
 * in the Monty bytecode file.
 */
void monty_pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = *stack;

    UNUSED(line_number);

    while (temp && temp->n != 0 && isascii(temp->n))
    {
        putchar(temp->n);
        temp = temp->next;
    }

    putchar('\n');
}

