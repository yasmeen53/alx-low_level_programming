#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * add_dnodeint - a function that adds a new node
  * @head: An input character
  * @n: An input character
  * Return: a linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	newnode->n = n;

	newnode->prev = NULL;
	newnode->next = NULL;
	if (newnode == NULL && sizeof(dlistint_t) > 0)
	{
		free(newnode);
	}
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
		free(newnode);
	}
	(*head)->prev = newnode;
	newnode->next = *head;
	*head = newnode;
	return (*head);
	free(newnode);
}
