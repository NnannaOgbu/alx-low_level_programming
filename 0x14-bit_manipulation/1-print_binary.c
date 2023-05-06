#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			putchar('1');
		else
			putchar('0');
	}
}
