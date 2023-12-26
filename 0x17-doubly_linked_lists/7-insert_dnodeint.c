#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * @h: An input character
 * @idx: An input character
 * @n: An input character
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	arrow = *h;
	counter = 0;
	addnode = malloc(sizeof(dlistint_t));
	addnode->n = n;
	addnode->prev = NULL;
	addnode->next = NULL;

	if (addnode == NULL)
	{
		return (NULL);
	}
	if (arrow == NULL)
	{
		arrow = addnode;

		return (addnode);
	}
	while (counter != (idx - 1))
	{
		if (arrow->next == NULL)
		{
			return (NULL);
		}
		counter++;
		arrow = arrow->next;
	}
	arrow2 = arrow->next;
	arrow->next = addnode;
	addnode->prev = arrow;
	arrow2->prev = addnode;
	addnode->next = arrow2;
	addnode->n = n;
	return (addnode);
}
