#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delets the head of a listint_t linked list
 * @head: pointer to the first elements in the liked list
 * Return: return the head nodes data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int v;

	if (head == NULL)
		return (0);

	current = *head;
	if (current == NULL)
		return (0);

	v = current->n;
	*head = current->next;
	free(current);
	return (v);
}
