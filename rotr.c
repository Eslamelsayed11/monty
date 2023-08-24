#include "monty.h"
/**
  * rotatesdown_f- a function that
  * rotates the stck to the bottom
  *@head: stack head
  *@f_Count: line_number
  *Return: no return
 */
void rotatesdown_f(stack_t **head, __attribute__((unused))
unsigned int f_Count)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
