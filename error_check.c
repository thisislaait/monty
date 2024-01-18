#include "monty.h"

/* Error Messages & Error Codes */

int no_int_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: usage: push integer\n", line_number);
    return EXIT_FAILURE;
}

int pop_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
    return EXIT_FAILURE;
}

int pint_error(unsigned int line_number)
{
    fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
    return EXIT_FAILURE;
}

int short_stack_error(unsigned int line_number, char *op)
{
    fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
    return EXIT_FAILURE;
}
