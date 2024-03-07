#ifndef SHELL_H
#define SHELL_H

/* ... other includes and definitions ... */

/* toem_builtin.c */
int _myexit(info_t *info);
void print_error(info_t *info, char *message);
void print_d(int num, int nl);

/* toem_commands.c */
int interactive(info_t *info);
void _eputchar(char c);
void fork_cmd(info_t *info);
void clear_info(info_t *info);
void write_history(info_t *info);
void free_info(info_t *info, int exit_status);
void set_info(info_t *info, char **av);
char *find_path(info_t *info, char *path, char *cmd);
char **get_environ(info_t *info);
int is_cmd(info_t *info, char *cmd);
int hsh(info_t *info, char **av);
int find_builtin(info_t *info);
void find_cmd(info_t *info);

/* toem_substitutions.c */
int is_chain(info_t *info, char *buf, size_t *p);
void check_chain(info_t *info, char *buf, size_t *p, size_t i, size_t len);
int replace_alias(info_t *info);
int replace_vars(info_t *info);
int replace_string(char **old, char *new);
int is_delim(char c, char *delimiters);

#endif /* SHELL_H */

