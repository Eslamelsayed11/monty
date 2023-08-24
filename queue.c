#include "monty.h"
/**
 * queue_function - a function that prints the top
 * @head: stack head
 * @f_Count: line_number
 * Return: no return
*/
void queue_function(stack_t **head, unsigned int f_Count)
{
	(void)head;
	(void)f_Count;
	bus.lifi = 1;
}

/**
 * add_queue_function - A function that add node to the tail stack
 * @x: new_value
 * @head: head of the stack
 * Return: no return
*/
void add_queue_function(stack_t **head, int x)
{
	stack_t *new_node, *A;

	A = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->x = x;
	new_node->next = NULL;
	if (A)
	{
		while (A->next)
			A = A->next;
	}
	if (!A)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		A->next = new_node;
		new_node->prev = A;
	}
}
