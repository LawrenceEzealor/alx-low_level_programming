#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: points to the first node in the listint_t list
 * @n: parameter to add to the new node
 *
 * Return: pointer to the added node
 */

listint_t *add_nodeint_end(list_t **head, const int n)
{
	listint_t *temp;
	listint_t *current;

	current = *head;

	while (current && current->next != NULL)
		current = current->next;


	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->n = n;

	temp->next = NULL;

	if (current)
		current->next = temp;
	else
		*head = temp;
	return (temp);
}
