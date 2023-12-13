#include "monty.h"
/**
 * push - push to the stack
 * @stack: pointer to the first node
 * @line_num: number of lines
*/
void push(stack_t **stack, unsigned int line_num)
{
stack_t *new_node;
int i, arg_int;
char *arg = strtok(NULL, " \t\n");

for (i = 0; arg[i] != '\0'; i++)
{
if (!isdigit(arg[i]))
{
fprintf(stderr, "L%u: usage: push integer\n", line_num);
exit(EXIT_FAILURE);
}
arg_int = atoi(arg);
}
new_node = malloc(sizeof(new_node));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
if (*stack == NULL)
{
new_node->n = arg_int;
new_node->next = NULL;
new_node->prev = NULL;
new_node->n = arg_int;
}
else
{
new_node->n = arg_int;
new_node->prev = NULL;
new_node->next = *stack;
(*stack)->prev = new_node;
*stack = new_node;
}}
