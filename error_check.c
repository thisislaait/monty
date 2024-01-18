#include "monty.h"

/**
 * no_int_error - Displays a no integer error message.
 * @line_number: Line number of the opcode.
 * Return: EXIT_FAILURE.
 */
int no_int_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: usage: push integer\n", line_number);
    return EXIT_FAILURE;
}

/**
 * pop_error - Displays a pop error message.
 * @line_number: Line number of the opcode.
 * Return: EXIT_FAILURE.
 */
int pop_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
    return EXIT_FAILURE;
}

/**
 * pint_error - Displays a pint error message.
 * @line_number: Line number of the opcode.
 * Return: EXIT_FAILURE.
 */
int pint_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
    return EXIT_FAILURE;
}

/**
 * short_stack_error - Displays a short stack error message.
 * @line_number: Line number of the opcode.
 * @op: Opcode causing the short stack error.
 * Return: EXIT_FAILURE.
 */
int short_stack_error(unsigned int line_number, char *op)
{
    fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
    return EXIT_FAILURE;
}
