#include "monty.h"
/**
 * main - Entery point
 * @argc: argument count
 * @argv: argument value
 * Return: 0 for succes and 1 for failure
*/
int main(int argc, char **argv)
{
char *line = NULL, *token, *line_copy;
size_t line_size = 0;
FILE *monty;
stack_t *stack = NULL;
unsigned int line_num = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
monty = fopen(argv[1], "r");
if (!monty)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (getline(&line, &line_size, monty) != -1)
{
line_num++;
line_copy = strdup(line);
if (line_copy == NULL)
exit(EXIT_FAILURE);
for (token = strtok(line_copy, " \t\n"); token; token = strtok(NULL, " \t\n"))
{
opcode(token, &stack, line_num);
}
free(line_copy);
}
free(line);
free_stack(stack);
fclose(monty);
return (0);
}
