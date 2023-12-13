#include "monty.h"
/**
 * opcode - function to habdle opcode
 * @opcode: determine which code to execute
 * @stack: pointer to the first node
 * @line_num: number of lines
*/
void opcode(char *opcode, stack_t **stack, unsigned int line_num)
{
if (strcmp(opcode, "push") == 0)
push(stack, line_num);
else if (strcmp(opcode, "pall") == 0)
pall(stack, line_num);
else if (strcmp(opcode, "pint") == 0)
pint(stack, line_num);
else if (strcmp(opcode, "pop") == 0)
pop(stack, line_num);
else if (strcmp(opcode, "swap") == 0)
swap(stack, line_num);
else if (strcmp(opcode, "add") == 0)
add(stack, line_num);
else if (strcmp(opcode, "nop") == 0)
nop(stack, line_num);
else
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_num, opcode);
exit(EXIT_FAILURE);
}}
