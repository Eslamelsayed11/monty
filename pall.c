#include "monty.h"
/**
 * Pull_Funtion - A function that prints the stack
 * @head: stack head
 * @f_Count: no used
 * Return: no return
*/
void Pull_Funtion(stack_t **head, unsigned int f_Count)
{
	stack_t *h;
	(void)f_Count;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->x);
		h = h->next;
	}
}
