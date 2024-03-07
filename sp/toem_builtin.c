#include "shell.h"

/* ... other includes ... */

/**
 * _myexit - handles the exit built-in command
 * @info: the parameter & return info struct
 *
 * Return: -1 to indicate exit should be called
 */
int _myexit(info_t *info)
{
    int exit_code = 0;

    if (info->argv[1])
    {
        exit_code = _erratoi(info->argv[1]);
        if (exit_code == -1)
        {
            print_error(info, "exit: Illegal number: ");
            _puts(info->argv[1]);
            _puts("\n");
            return 1;
        }
    }
    free_info(info, 1);
    exit(exit_code);
}

/* ... other functions ... */

