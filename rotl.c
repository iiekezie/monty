/*
 * File: rotl.c
 * Auth: Ifeanyi I Ekezie
 */

#include "monty.h"

/**
 *f_rotl- Rotates the stack to the top.
 *@head: Double pointer to the head of the stack.
 *@counter: Line number of the opcode in the Monty file.
 *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
