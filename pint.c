#include "monty.h"
/**
 * pint -  prints the value at the top of the stack,
 * @stack: pointer to the first node
 * @line_num: number of lines
*/
void pint(stack_t **stack, unsigned int line_num)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
