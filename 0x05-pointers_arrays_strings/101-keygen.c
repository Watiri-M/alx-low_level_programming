#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define stopLimit 2600
#define asciiStop 120
#define asciiStart 32



/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)

{

	char pwd[100];

	int randValue, n = 0, i = 0;

	srand(time(NULL));

	while (n < stopLimit)

	{

	randValue = random() % asciiStop;

	if (randValue > asciiStart)

	{
	pwd[i++] = randValue;
	n += randValue;
	}
	}
	pwd[i++] = (2772 - n);
	pwd[i] = '\0';
	printf("%s", pwd);
	return (0);
}
