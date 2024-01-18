#include "monty.h"

/**
 * usage_error - Displays a usage error message.
 * Return: EXIT_FAILURE.
 */
int usage_error(void)
{
    fprintf(stderr, "USAGE: monty file\n");
    return EXIT_FAILURE;
}

/**
 * malloc_error - Displays a malloc error message.
 * Return: EXIT_FAILURE.
 */
int malloc_error(void)
{
    fprintf(stderr, "Error: malloc failed\n");
    return EXIT_FAILURE;
}

/**
 * f_open_error - Displays a file open error message.
 * @filename: Name of the file that could not be opened.
 * Return: EXIT_FAILURE.
 */
int f_open_error(char *filename)
{
    fprintf(stderr, "Error: Can't open file %s\n", filename);
    return EXIT_FAILURE;
}

/**
 * unknown_op_error - Displays an unknown opcode error message.
 * @opcode: Unknown opcode.
 * @line_number: Line number of the unknown opcode.
 * Return: EXIT_FAILURE.
 */
int unknown_op_error(char *opcode, unsigned int line_number)
{
    fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
    return EXIT_FAILURE;
}

