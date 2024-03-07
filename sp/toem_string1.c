#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of the string
 */
int _strlen(char *s)
{
    int i = 0;

    if (!s)
        return (0);

    while (*s++)
        i++;

    return (i);
}

/**
 * _strcmp - performs lexicographic comparison of two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }

    if (*s1 == *s2)
        return (0);
    else
        return (*s1 < *s2 ? -1 : 1);
}

