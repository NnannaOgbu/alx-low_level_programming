#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
