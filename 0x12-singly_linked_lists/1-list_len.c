#include <stdio.h>
#include "lists.h"

/**
 * function that returns the number of elements in a linked list_t list.
 * @h: pointer to the list_t list to print
 * list_len: Function that return number of elements in  list_t
 *
 * Return: total number of element in a list
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
