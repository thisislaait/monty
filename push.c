#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number in the Monty bytecodes file.
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *push_arg = strtok(NULL, "\n\t");
	int pVal;

	if (!is_valid_push_arg(push_arg, line_number))
		exit(EXIT_FAILURE);

	pVal = atoi(push_arg);

	stack_t *new_node = create_node(pVal);
	if (!new_node)
	{
		fprintf(stdout, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if (*stack == NULL)
		*stack = new_node;
	else if (SQ)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
	else
	{
		stack_t *tmp = *stack;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
	}
}

/**
 * is_valid_push_arg - Checks if the argument for push is valid.
 * @push_arg: Argument for push opcode.
 * @line_number: Line number in the Monty bytecodes file.
 * Return: 1 if valid, 0 otherwise.
 */
int is_valid_push_arg(char *push_arg, unsigned int line_number)
{
	if (!push_arg || (!isdigit(*push_arg) && *push_arg != '-'))
	{
		fprintf(stdout, "L%u: usage: push integer\n", line_number);
		return 0;
	}
	return 1;
}

/**
 * create_node - Creates a new stack node.
 * @value: Value to be assigned to the new node.
 * Return: Pointer to the newly created node.
 */
stack_t *create_node(int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (!new_node)
		return NULL;

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = NULL;

	return new_node;
}

