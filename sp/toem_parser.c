#include "shell.h"

/**
 * parse_cmd - parses a command into arguments
 * @info: the parameter struct
 *
 * Return: Void
 */
void parse_cmd(info_t *info)
{
    info->argc = 0;
    info->argv = strtow(info->cmd_buf, " \t\n");

    if (!info->argv || !info->argv[0])
    {
        free_info(info);
        return;
    }

    replace_alias(info);
    replace_vars(info);
}

