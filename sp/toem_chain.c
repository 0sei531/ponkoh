#include "shell.h"

/**
 * is_chain - test if current char in buffer is a chain delimiter
 * @info: the parameter struct
 * @buf: the char buffer
 * @p: address of current position in buf
 *
 * Return: 1 if chain delimiter, 0 otherwise
 */
int is_chain(info_t *info, char *buf, size_t *p)
{
    size_t j = *p;

    switch (buf[j])
    {
    case '|':
        if (buf[j + 1] == '|')
        {
            buf[j] = 0;
            j++;
            info->cmd_buf_type = CMD_OR;
            break;
        }
    case '&':
        if (buf[j + 1] == '&')
        {
            buf[j] = 0;
            j++;
            info->cmd_buf_type = CMD_AND;
            break;
        }
    case ';':
        buf[j] = 0;
        info->cmd_buf_type = CMD_CHAIN;
        break;
    default:
        return 0;
    }

    *p = j;
    return 1;
}

/**
 * check_chain - checks if we should continue chaining based on last status
 * @info: the parameter struct
 * @buf: the char buffer
 * @p: address of current position in buf
 * @i: starting position in buf
 * @len: length of buf
 *
 * Return: Void
 */
void check_chain(info_t *info, char *buf, size_t *p, size_t i, size_t len)
{
    size_t j = *p;

    switch (info->cmd_buf_type)
    {
    case CMD_AND:
        if (info->status)
        {
            buf[i] = 0;
            j = len;
        }
        break;
    case CMD_OR:
        if (!info->status)
        {
            buf[i] = 0;
            j = len;
        }
        break;
    default:
        break;
    }

    *p = j;
}

