#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the address of the new element, or NULL if it failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
		if (*b == '0')
			result = result << 1;
		else if (*b == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}
	return (result);
}
