#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * dlistint_len - a function that prints the number of elements
  * @h: An input character
  * Return: Always size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}
	pointer1 = h;
	while (pointer1 != NULL)
	{
		count++;
		pointer1 = pointer1->next;
	}
	return (count);
}
