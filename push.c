#include "monty.h"
/**
 * push - push to the stack
 * @stack: pointer to the first node
 * @line_num: number of lines
*/
void push(stack_t **stack, unsigned int line_num)
{
stack_t *new_node;
int arg_int;
char *arg = strtok(NULL, " \t\n$");
size_t i, len;

if (!arg)
{fprintf(stderr, "L%u: usage: push integer\n", line_num);
exit(EXIT_FAILURE);
}
len = strcspn(arg, "\n");
arg[len] = '\0';
for (i = 0; arg[i] != '\0'; i++)
{
if (!isdigit(arg[i]) && !(i == 0 && (arg[i] == '+' || arg[i] == '-')))
{fprintf(stderr, "L%u: usage: push integer\n", line_num);
exit(EXIT_FAILURE);
}}
arg_int = atoi(arg);
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new_node->n = arg_int;
new_node->prev = NULL;
if (*stack != NULL)
{new_node->next = *stack;
(*stack)->prev = new_node;
}
else
new_node->next = NULL;
*stack = new_node;
}
