#include "monty.h"
/**
* Free_Stack_function - A function that frees a doubly linked list
* @head: head of the stack
*/
void Free_Stack_function(stack_t *head)
{
	stack_t *A;

	A = head;
	while (head)
	{
		A = head->next;
		free(head);
		head = A;
	}
}
