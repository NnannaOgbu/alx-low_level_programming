#include <stdio.h>

void beforeMain(void)__attribute__ ((constructor));

/**
 * beforeMain - prints the functions argument before the main
*/

void beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
