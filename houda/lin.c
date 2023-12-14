#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void process_line(char *line)
{
	FILE *file = fopen("example.txt", "r");
    if (!file)
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    while ((read = getline(&line, &len, file)) != -1)
    {
        // Process each line
        process_line(line);
    }

    free(line);
    fclose(file);

    return 0;
}
