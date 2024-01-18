#include "monty.h"

/**
 * token_arr_len - calculates the number of tokens
 * 
 * Return: Number of tokens
 */
unsigned int token_arr_len(void)
{
    char **tokens = op_toks;
    unsigned int count = 0;

    if (!tokens)
        return count;

    while (*tokens)
    {
        count++;
        tokens++;
    }

    return count;
}
