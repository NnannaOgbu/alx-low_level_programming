#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node- adds a new node at the beginning of a linked list
 * @str: new string to add in the given node
 * @head: this is a double pointer to the head of the list
 *
 * Return: the address of new element in the list or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	/* allocate memory for new node */
	list_t *newNode = malloc(sizeof(list_t));

	/* Test to see if new node is equal to NULL */
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
