#include "monty.h"
/**
 * Push_Function - Function that add node to the stack
 * @head: stack head
 * @f_Count: line_number
 * Return: no return
*/
void Push_Function(stack_t **head, unsigned int f_Count)
{
	int x, e = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			e++;
		for (; bus.arg[e] != '\0'; e++)
		{
			if (bus.arg[e] > 57 || bus.arg[e] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", f_Count);
			fclose(bus.file);
			free(bus.content);
			Free_Stack_function(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", f_Count);
		fclose(bus.file);
		free(bus.content);
		Free_Stack_function(*head);
		exit(EXIT_FAILURE); }
	x = atoi(bus.arg);
	if (bus.lifi == 0)
		Add_Node(head, x);
	else
		add_queue_function(head, x);
}
