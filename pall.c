#include "monty.h"
/**
 * pall - print all stack data
 * @stack: pointer to the first node
 * @line_num: number of lines
*/
void pall(stack_t **stack, unsigned int line_num)
{
stack_t *temp;
(void)line_num;

temp = *stack;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
