#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Null Void
 */
int main(void)
{
	printf("%s\n", __BUDDY_FILE__);
	return (0);
}
