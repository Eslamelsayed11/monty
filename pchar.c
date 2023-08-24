#include "monty.h"
/**
 * Pchar_Funtion - A function that prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @f_Count: line_number
 * Return: no return
*/
void Pchar_Funtion(stack_t **head, unsigned int f_Count)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", f_Count);
		fclose(bus.file);
		free(bus.content);
		Free_Stack_function(*head);
		exit(EXIT_FAILURE);
	}
	if (h->x > 127 || h->x < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", f_Count);
		fclose(bus.file);
		free(bus.content);
		Free_Stack_function(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->x);
}
