#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of all data
 * @head: An input character
 * Return: An integer.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	point = head;

	if (point == NULL)
	{
		return (0);
	}
	if (point->next == NULL)
	{
		sum = sum + point->n;
		return (sum);
	}
	while (point->next != NULL)
	{
	sum = sum + point->n;
	point = point->next;
	}
	sum = sum + point->n;
	return (sum);
}
