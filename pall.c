#include "monty.h"

/**
 * pall - Prints all the values on the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number in the Monty bytecodes file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    /* Avoid printing if the stack is empty */
    if (!current)
        return;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
