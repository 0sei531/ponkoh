#include "shell.h"

/* ... other includes ... */

/**
 * is_delim - checks if a character is a delimiter
 * @c: the character to check
 * @delimiters: a string containing delimiters
 *
 * Return: 1 if c is a delimiter, 0 otherwise
 */
int is_delim(char c, char *delimiters)
{
    while (*delimiters)
    {
        if (c == *delimiters)
            return 1;
        delimiters++;
    }
    return 0;
}

/* ... other functions ... */

