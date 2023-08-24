#include "monty.h"
/**
 * PrinttheStringe_Funtion - A function that pri the string
 * starting at
 * the top of the stack,
 * followed by a new
 * @head: stack head
 * @f_Count: line_number
 * Return: no return
*/
void PrinttheStringe_Funtion(stack_t **head, unsigned int f_Count)
{
	stack_t *h;
	(void)f_Count;

	h = *head;
	while (h)
	{
		if (h->x > 127 || h->x <= 0)
		{
			break;
		}
		printf("%c", h->x);
		h = h->next;
	}
	printf("\n");
}
