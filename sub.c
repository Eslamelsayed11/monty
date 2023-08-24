#include "monty.h"
/**
  *sub_funtion- sustration
  *@head: stack head
  *@f_Count: line_number
  *Return: no return
 */
void sub_funtion(stack_t **head, unsigned int f_Count)
{
	stack_t *A;
	int sus, nodes;

	A = *head;
	for (nodes = 0; A != NULL; nodes++)
		A = A->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", f_Count);
		fclose(bus.file);
		free(bus.content);
		Free_Stack_function(*head);
		exit(EXIT_FAILURE);
	}
	A = *head;
	sus = A->next->x - A->x;
	A->next->x = sus;
	*head = A->next;
	free(A);
}
