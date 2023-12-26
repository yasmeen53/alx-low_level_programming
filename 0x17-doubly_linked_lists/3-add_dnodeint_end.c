#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * add_dnodeint_end - a function that adds a new node
  * @head: An input character
  * @n: An input character
  * Return: a linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode1;

	newnode1 = malloc(sizeof(dlistint_t));

	newnode1->n = n;
	newnode1->prev = NULL;
	newnode1->next = NULL;
	if (newnode1 == NULL && sizeof(dlistint_t) > 0)
	{
		free(newnode1);
	}
	if (*head == NULL)
	{
		*head = newnode1;
		return (*head);
		free(newnode1);
	}
	pointer3 = *head;

	while (pointer3->next != NULL)
	{
		pointer3 = pointer3->next;
	}
	pointer3->next = newnode1;
	newnode1->prev = pointer3;
	return (*head);
	free(newnode1);
}
