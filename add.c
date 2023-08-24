#include "monty.h"
/**
 * Add_Function - A Function that adds the top two elements of the stack.
 * @head: stack head
 * @f_Count: line_number
 * Return: no return
*/
void Add_Function(stack_t **head, unsigned int f_Count)
{
	stack_t *h;
	int Length = 0, A;

	h = *head;
	while (h)
	{
		h = h->next;
		Length++;
	}
	if (Length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", f_Count);
		fclose(bus.file);
		free(bus.content);
		Free_Stack_function(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	A = h->x + h->next->x;
	h->next->x = A;
	*head = h->next;
	free(h);
}

