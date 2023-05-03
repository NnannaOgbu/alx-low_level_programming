#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list- function that frees a list_t list.
 * @head: this is a pointer to the head of the list
 *
 * Return: Always 0
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
