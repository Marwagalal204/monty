#include "monty.h"
/**
 * pop - remove top of the stack
 * @stack: pointer to the first node
 * @line_num: number of lines
*/
void pop(stack_t **stack, unsigned int line_num)
{
stack_t *temp;

if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
}
temp = *stack;
*stack = (*stack)->next;
free(temp);
}
