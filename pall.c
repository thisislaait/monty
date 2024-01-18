#include "monty.h"

/**
 * pall - Prints all values on the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number in the Monty bytecodes file.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	UNUSED(line_number);

	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
