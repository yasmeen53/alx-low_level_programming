#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - a function that return nth node
 * @head: An input character
 * @index: An input character
 * Return: dlistint_t
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	indicator = head;

	while (indicator->next != NULL)
	{
		if (count == index)
		{
			return (indicator);
		}
		count++;
		indicator = indicator->next;
	}
	return (NULL);
}
