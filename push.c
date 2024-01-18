#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number in the Monty bytecodes file.
 */
void push(stack_t **stack, int line_number)
{
    char *arg;
    int value;

    /* Check if there is an argument given to push */
    if (!stack || !line_number)
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    arg = strtok(NULL, " \n");
    if (!arg || !isdigit(*arg) && *arg != '-')
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    value = atoi(arg);

    /* Create a new stack node */
    stack_t *new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    /* Initialize the new node */
    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack)
        (*stack)->prev = new_node;

    *stack = new_node;
}
