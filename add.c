#include "monty.h"
/**
 * add - add 2 numer of stack
 * @stack: pointer to the first node
 * @line_num: number of lines
 * Return: added numbers
*/
int add(stack_t **stack, unsigned int line_num)
{
stack_t *temp;
int res;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
exit(EXIT_FAILURE);
}
temp = *stack;
*stack = temp->next;
res = (*stack)->n + temp->n;
(*stack)->n = res;
free(temp);
(*stack)->prev = NULL;
return (res);
}
