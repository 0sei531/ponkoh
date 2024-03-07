#include "shell.h"

/**
 * _erratoi - converts a string to an integer
 * @str: the string to convert
 *
 * Return: the converted integer, or -1 on failure
 */
int _erratoi(char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (!str)
        return -1;

    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }

    for (; str[i]; i++)
    {
        if (str[i] < '0' || str[i] > '9')
            return -1;
        result = result * 10 + (str[i] - '0');
    }

    return result * sign;
}

