#include "monty.h"
/**
 * free_stack - frees stack
 * @stack: a pointer to node
 * Return: nothing
 */
void free_stack(stack_t *stack)
{
while (stack != NULL)
{
stack_t *temp;
temp = stack;
stack = stack->next;
free(temp);
}}
