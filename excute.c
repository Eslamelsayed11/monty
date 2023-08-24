#include "monty.h"
/**
* Execute_Function - The function that executes the opcode
* @stack: head linked list - stack
* @f_Count: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int Execute_Function(char *content, stack_t **stack,
unsigned int f_Count, FILE *file)
{
	instruction_t opst[] = {
				{"push", Push_Function}, {"pall", Pull_Funtion}, {"pint", Pint_Funtion},
				{"pop", Top_Funtion},
				{"swap", swap_funtion},
				{"add", Add_Function},
				{"nop", Nop_Funtion},
				{"sub", sub_funtion},
				{"div", Function_Divides},
				{"mul", Multiplie_Funtion},
				{"mod", f_mod},
				{"pchar", Pchar_Funtion},
				{"pstr", PrinttheStringe_Funtion},
				{"rotl",   rotatesup_f},
				{"rotr",   rotatesup_f},
				{"queue", queue_function},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, f_Count);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", f_Count, op);
		fclose(file);
		free(content);
		Free_Stack_function(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
