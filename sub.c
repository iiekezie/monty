/*
 * File: sub.c
 * Auth: Ifeanyi I Ekezie
 */

#include "monty.h"

/**
 *f_sub- sustration
 *@head: Double pointer to the head of the stack.
 *@counter: Line number of the opcode in the Monty file.
 *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
