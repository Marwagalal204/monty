#include "monty.h"
/**
 * swap - swap the value of stack
 * @stack: pointer to the first node
 * @line_num: number of lines
*/
void swap(stack_t **stack, unsigned int line_num)
{
int temp_n;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
exit(EXIT_FAILURE);
}
temp_n = (*stack)->next->n;
(*stack)->next->n = (*stack)->n;
(*stack)->n = temp_n;
}
