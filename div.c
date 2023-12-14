#include "monty.h"
/**
 * _div - divide 2 numer of stack
 * @stack: pointer to the first node
 * @line_num: number of lines
 * Return: dividing numbers
*/
int _div(stack_t **stack, unsigned int line_num)
{
stack_t *temp;
int res;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't div, stack too short\n", line_num);
exit(EXIT_FAILURE);
}
temp = *stack;
*stack = temp->next;
if (temp->n == 0)
{
fprintf(stderr, "L%u: division by zero\n", line_num);
exit(EXIT_FAILURE);
}
res = (*stack)->n / temp->n;
(*stack)->n = res;
free(temp);

return (res);
}
