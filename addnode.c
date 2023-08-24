#include "monty.h"
/**
 * Add_Node - Function that add node to the head stack
 * @head: The head of the stack
 * @x: new_value
 * Return: no return
*/
void Add_Node(stack_t **head, int x)
{

	stack_t *new_node, *A;

	A = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (A)
		A->prev = new_node;
	new_node->x = x;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
