#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the address of the new element, or NULL if it failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return -1;

	/* Shift n right by index bits and check the least significant bit */
	return (n >> index) & 1;
}
