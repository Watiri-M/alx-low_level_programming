#include <stdio.h>
void hare_tort(void) __attribute__ ((constructor));


/**
 * hare_tort - prints
 *
 * Return: void
 */
void hare_tort(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
