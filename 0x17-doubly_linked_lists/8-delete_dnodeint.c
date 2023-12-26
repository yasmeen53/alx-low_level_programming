#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that delete node at given index
 * @head: An input character
 * @index: An input character
 * Return: Always -1 and 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	count = 0;
	pointer_1 = *head;
	if (pointer_1 == NULL)
	{
		return (-1);
	}
	if (pointer_1->next == NULL)
	{
		*head = NULL;
		return (1);
	}
	if (count == index)
	{
		pointer_2 = pointer_1->next;
		pointer_1->next = NULL;
		*head = pointer_2;
		pointer_2->prev = NULL;
		return (1);
	}
	while (count != (index - 1))
	{
		count++;
		pointer_1 = pointer_1->next;
	}
	pointer_2 = pointer_1->next;
	pointer_3 = pointer_1->next->next;
	pointer_2->prev = NULL;
	pointer_2->next = NULL;
	pointer_1->next = pointer_3;
	pointer_3->prev = pointer_1;
	return (1);
}
