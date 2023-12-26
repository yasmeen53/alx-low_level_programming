#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - a function that prints the number of node
 * @h: An input character
 * Return: Always size_t
*/
size_t print_dlistint (const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}
	pointer = h;
	while (pointer != NULL)
	{
		count++;
		printf("%d\n", pointer->n);
		pointer = pointer->next;
	}
	return (count);
}
