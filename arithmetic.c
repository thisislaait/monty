#include "monty.h"

/**
 * sub - Subtracts the top element of the stack from the second top element.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void monty_sub(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n -= (*stack)->n;
    pop(stack, line_number);
}

/**
 * divide - Divides the second top element of the stack by the top element.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void monty_divide(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%u: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n /= (*stack)->n;
    pop(stack, line_number);
}

/**
 * multiply - Multiplies the second top element of the stack with the top element.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void monty_multiply(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n *= (*stack)->n;
    pop(stack, line_number);
}

/**
 * moddy - Computes the rest of the division of the second top element by the top element.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number of the opcode in the Monty bytecode file.
 */
void monty_moddy(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%u: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n %= (*stack)->n;
    pop(stack, line_number);
}