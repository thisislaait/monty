#include "monty.h"

/**
 * main - Entry point for Monty Interpreter
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char **argv)
{
	FILE *script_fd = NULL;
	int exit_code = EXIT_SUCCESS;

	if (argc != 2)
		return (usage_error());

	script_fd = fopen(argv[1], "r");
	if (script_fd == NULL)
		return (f_open_error(argv[1]));

	exit_code = run_monty(script_fd);

	fclose(script_fd);

	return (exit_code);
}
