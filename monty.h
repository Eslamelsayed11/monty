#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @x: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int x;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void Push_Function(stack_t **head, unsigned int number);
void Pull_Funtion(stack_t **head, unsigned int number);
void Pint_Funtion(stack_t **head, unsigned int number);
int Execute_Function(char *content, stack_t **head, unsigned int f_Count, FILE *file);
void Free_Stack_function(stack_t *head);
void Top_Funtion(stack_t **head, unsigned int f_Count);
void swap_funtion(stack_t **head, unsigned int f_Count);
void Add_Function(stack_t **head, unsigned int f_Count);
void Nop_Funtion(stack_t **head, unsigned int f_Count);
void sub_funtion(stack_t **head, unsigned int f_Count);
void Function_Divides(stack_t **head, unsigned int f_Count);
void Multiplie_Funtion(stack_t **head, unsigned int f_Count);
void f_mod(stack_t **head, unsigned int f_Count);
void Pchar_Funtion(stack_t **head, unsigned int f_Count);
void PrinttheStringe_Funtion(stack_t **head, unsigned int f_Count);
void   rotatesup_f(stack_t **head, unsigned int f_Count);
void   rotatesup_f(stack_t **head, __attribute__((unused)) unsigned int f_Count);
void Add_Node(stack_t **head, int x);
void add_queue_function(stack_t **head, int x);
void queue_function(stack_t **head, unsigned int f_Count);
void f_stack(stack_t **head, unsigned int f_Count);
#endif
