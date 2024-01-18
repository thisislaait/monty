#include "monty.h"

/**
 * add_node - Adds a new node at the beginning of a stack.
 * @stack: Double pointer to the beginning of the stack.
 * @value: Value to be added to the new node.
 */
void add_node(stack_t **stack, int value)
{
    stack_t *new_node = malloc(sizeof(stack_t));

    if (!new_node)
        malloc_error();

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack)
        (*stack)->prev = new_node;

    *stack = new_node;
}

/**
 * add_node_end - Adds a new node at the end of a stack.
 * @stack: Double pointer to the beginning of the stack.
 * @value: Value to be added to the new node.
 */
void add_node_end(stack_t **stack, int value)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    stack_t *last = *stack;

    if (!new_node)
        malloc_error();

    new_node->n = value;
    new_node->next = NULL;

    if (!*stack)
    {
        new_node->prev = NULL;
        *stack = new_node;
        return;
    }

    while (last->next)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;
}
