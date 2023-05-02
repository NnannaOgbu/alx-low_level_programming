#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the total number of elements in  a linked list
 * @h: pointer to the list_t list to print
 *
 *
 * Return: total number of element in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
