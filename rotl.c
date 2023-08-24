#include "monty.h"
/**
  *  rotatesup_f- A function that rotates
  * the stack to the top
  *@head: stack head
  *@f_Count: line_number
  *Return: no return
 */
void rotatesup_f(stack_t **head,  __attribute__((unused)) unsigned int f_Count)
{
	stack_t *tmp = *head, *A;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	A = (*head)->next;
	A->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = A;
}
