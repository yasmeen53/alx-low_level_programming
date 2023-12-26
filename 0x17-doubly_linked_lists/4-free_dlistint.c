#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: An input character
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp2;
	dlistint_t *tmp1 = head;

	while (tmp1 != NULL)
	{
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = tmp2;
	}
}
