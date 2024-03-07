#include "shell.h"

/* ... other includes ... */

/**
 * interactive - checks if the shell is in interactive mode
 * @info: the parameter struct
 *
 * Return: 1 if interactive, 0 otherwise
 */
int interactive(info_t *info)
{
    return isatty(STDIN_FILENO) && isatty(STDOUT_FILENO) && !info->script;
}

/**
 * _eputchar - writes the character c to stderr
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _eputchar(char c)
{
    write(STDERR_FILENO, &c, 1);
}

/* ... other functions ... */

