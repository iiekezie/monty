/*
 * File: pall.c
 * Auth: Ifeanyi I Ekezie
 */

#include "monty.h"

/**
 * f_pall - Prints all the values on the stack.
 * @head: Double pointer to the head of the stack.
 * @counter: Line number of the opcode in the Monty file.
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
