/* File Name: interpreter_errors.c */

#include "monty.h"

/**
 * set_op_tok_error - Sets an interpreter error based on the error code.
 * @error_code: Error code representing the type of error.
 */
void set_op_tok_error(int error_code)
{
    switch (error_code)
    {
    case MALLOC_ERROR:
        fprintf(stderr, "Error: malloc failed\n");
        break;
    case OPEN_ERROR:
        fprintf(stderr, "Error: Can't open file %s\n", op_toks[1]);
        break;
    case UNKNOWN_OPCODE:
        fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op_toks[0]);
        break;
    default:
        break;
    }
    exit(EXIT_FAILURE);
}
