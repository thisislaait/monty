/* File Name: interpreter_init_free.c */

#include "monty.h"

/**
 * free_stack - Frees a stack.
 * @stack: Double pointer to the beginning of the stack.
 */
void free_stack(stack_t **stack)
{
    stack_t *current = *stack;
    stack_t *next;

    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }

    *stack = NULL;
}

/**
 * init_stack - initializes an empty stack
 * @stack: double pointer to the beginning of the stack
 *
 * Return: 1 on success, 0 on failure
 */
int init_stack(stack_t **stack)
{
    *stack = NULL;
    return 1;
}
/**
 * free_tokens - Frees the tokens array.
 */
void free_tokens(void)
{
    char **tokens = op_toks;

    if (!tokens)
        return;

    while (*tokens)
    {
        free(*tokens);
        tokens++;
    }

    free(op_toks);
    op_toks = NULL;
}