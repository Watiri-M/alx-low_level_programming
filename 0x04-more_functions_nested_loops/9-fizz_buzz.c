#include <stdio.h>

/**
 * main - Entry point
 * Return: Void
 */

int main(void)
{
	int n = 1;

	do {
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n != stopVar)
			printf(" ");
		n++;
	} while (n <= stopVar);
	printf("\n");

	return (0);
}
