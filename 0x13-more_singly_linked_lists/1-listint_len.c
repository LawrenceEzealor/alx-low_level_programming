#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of object
 */

size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	whilie (h)
	{
	i	num++;
		h = h->next;
	}

	return (num);
}
