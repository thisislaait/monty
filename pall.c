#include "monty.h"

/**
 * pall - Prints all values on the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number in the Monty bytecodes file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
    UNUSED(line_number);

    print_stack(*stack);
}

/**
 * print_stack - Prints all values in the stack.
 * @stack: Pointer to the top of the stack.
 */
void print_stack(stack_t *stack)
{
    UNUSED(stack);
    stack_t *tmp = stack;

    while (tmp != NULL)
    {
        printf("%d\n", tmp->n);
        tmp = tmp->next;
    }
}
