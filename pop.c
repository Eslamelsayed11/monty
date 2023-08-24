#include "monty.h"
/**
 * Top_Funtion - A function that prints the top
 * @head: stack head
 * @f_Count: line_number
 * Return: no return
*/
void Top_Funtion(stack_t **head, unsigned int f_Count)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", f_Count);
		fclose(bus.file);
		free(bus.content);
		Free_Stack_function(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
