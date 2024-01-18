#include "monty.h"

/* Error Messages & Error Codes */
int usage_error(void)
{
    fprintf(stderr, "USAGE: monty file\n");
    return EXIT_FAILURE;
}

int malloc_error(void)
{
    fprintf(stderr, "Error: malloc failed\n");
    return EXIT_FAILURE;
}

int f_open_error(char *filename)
{
    fprintf(stderr, "Error: Can't open file %s\n", filename);
    return EXIT_FAILURE;
}

int unknown_op_error(char *opcode, unsigned int line_number)
{
    fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
    return EXIT_FAILURE;
}

