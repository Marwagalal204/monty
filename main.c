#include "monty.h"
/**
 * main - Entery point
 * @argc: argument count
 * @argv: argument value
 * Return: 0 for succes and 1 for failure
*/
int main(int argc, char **argv)
{
char *line, *token;
FILE *monty = fopen(argv[1], "r");
stack_t **stack;
unsigned int *line_num;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
return (0);

if (!monty)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

while (fgets(line, sizeof(line), monty))
{
(*line_num)++;
for (token = strtok(line, " \t\n"); token; token = strtok(NULL, " \t\n"))
{
opcode(token, stack, *line_num);
}}
fclose(monty);
free(stack);
}
