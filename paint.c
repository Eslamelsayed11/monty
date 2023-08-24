#include "monty.h"
/**
 * Pint_Funtion - The Function which prints the top
 * @head: stack head
 * @f_Count: line_number
 * Return: no return
*/
void Pint_Funtion(stack_t **head, unsigned int f_Count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", f_Count);
		fclose(bus.file);
		free(bus.content);
		Free_Stack_function(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->x);
}
