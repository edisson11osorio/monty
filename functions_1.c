#include "monty.h"
/**
 * _push - Function that pushes an element to the top of stack.
 * Return: Void.
 * @head: Head of a double linked list
 * @line_number: Number of lines executed before an error is printed
 */
void _push(stack_t **head, unsigned int line_number)
{
	stack_t *new_node = NULL;
	int number = 0;
	char *string;

	if (head == NULL)
	{
		return;
	}
	string = strtok(NULL, DELIMITERS);
	if (!number_verifier(string))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		freedata(data);
		exit(EXIT_FAILURE);
	}
	number = atoi(string);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = number;
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
}
/**
 * _pall - Function that prints all the values on the stack,
 * starting from the top of the stack.
 * exit: Void.
 * @head: Head of a double linked list
 * @line_number: Number of lines executed before an error is printed
 */
void _pall(stack_t **head, unsigned int line_number)
{
	stack_t *temp = *head;

	while (temp)
	{
		fprintf(stdout, "%d\n", temp->n);
		temp = temp->next;
	}
	(void)line_number;
}
