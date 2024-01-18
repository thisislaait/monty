/* File Name: custom_lib.c */

#include "monty.h"

/**
 * strtow - Splits a string into words.
 * @str: Input string.
 * @delims: Delimiters for splitting.
 * Return: Array of words.
 */
char **strtow(char *str, char *delims)
{
    char **tokens = NULL;
    char *token = NULL;
    int count = 0;

    if (!str || !delims)
        return NULL;

    tokens = malloc(sizeof(char *) * (token_arr_len() + 1));
    if (!tokens)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    token = strtok(str, delims);
    while (token)
    {
        tokens[count] = strdup(token);
        if (!tokens[count])
        {
            // Free previously allocated memory
            while (count > 0)
            {
                count--;
                free(tokens[count]);
            }
            free(tokens);

            fprintf(stderr, "Error: malloc failed\n");
            exit(EXIT_FAILURE);
        }
        token = strtok(NULL, delims);
        count++;
    }
    tokens[count] = NULL;

    return tokens;
}

/**
 * get_int - Converts an integer to a string.
 * @n: Integer to convert.
 * Return: Converted string.
 */
char *get_int(int n)
{
    char *str = NULL;
    int temp = n;
    int length = 0;

    while (temp)
    {
        temp /= 10;
        length++;
    }

    if (n == 0)
        length = 1;

    str = malloc(sizeof(char) * (length + 1));
    if (!str)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    if (n == 0)
        str[0] = '0';

    while (n)
    {
        str[length - 1] = (n % 10) + '0';
        n /= 10;
        length--;
    }

    str[length] = '\0';

    return str;
}
