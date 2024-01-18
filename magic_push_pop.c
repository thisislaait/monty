#include "monty.h"

/**
 * push - pushes an element onto the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number of the opcode in the Monty file
 */
void monty_push(stack_t **stack, unsigned int line_number)
{
    char *arg;
    int value;

    arg = op_toks[1];

    if (!arg || !is_int(arg))
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        set_op_tok_error(EXIT_FAILURE);
        return;
    }

    value = atoi(arg);

    if (check_mode(*stack) == STACK)
        add_node(stack, value);
    else
        add_node_end(stack, value);
}

/**
 * pall - prints all values on the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number of the opcode in the Monty file
 */
void monty_pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    UNUSED(line_number);

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}

/**
 * pint - prints the value at the top of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number of the opcode in the Monty file
 */
void monty_pint(stack_t **stack, unsigned int line_number)
{
    if (!stack || !*stack)
        pint_error(line_number);

    printf("%d\n", (*stack)->n);
}

/**
 * pop - removes the top element of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number of the opcode in the Monty file
 */
void monty_pop(stack_t **stack, unsigned int line_number)
{
    if (!stack || !*stack)
    {
        pop_error(line_number);
    }

    pop_node(stack);
}

/**
 * pop_node - removes the top node of the stack
 * @stack: double pointer to the beginning of the stack
 */
void pop_node(stack_t **stack)
{
    stack_t *temp;

    if (*stack)
    {
        temp = *stack;
        *stack = (*stack)->next;
        if (*stack)
        {
            (*stack)->prev = NULL;
        }
        free(temp);
    }
}
