#include "monty.h"

/**
 * is_int - Checks if a string represents a valid integer.
 * @str: String to check.
 * Return: 1 if it's a valid integer, 0 otherwise.
 */
int is_int(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	if (*str == '-')
		i++;
	for (; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}