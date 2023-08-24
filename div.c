#include "monty.h"
/**
 * Function_Divides - function that divides the top two elements of the stack.
 * @head: stack head
 * @f_Count: line_number
 * Return: no return
*/
void Function_Divides(stack_t **head, unsigned int f_Count)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", f_Count);
		fclose(bus.file);
		free(bus.content);
		Free_Stack_function(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->x == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", f_Count);
		fclose(bus.file);
		free(bus.content);
		Free_Stack_function(*head);
		exit(EXIT_FAILURE);
	}
	A = h->next->x / h->x;
	h->next->x = A;
	*head = h->next;
	free(h);
}
