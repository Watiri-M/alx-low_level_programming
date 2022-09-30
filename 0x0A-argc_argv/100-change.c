#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: c1
 * @argv: c2
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int z, i;
	unsigned int i;
	char *p;

	int mon[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	z = strtol(argv[1], &p, 10);
	i = 0;

	if (!*p)
	{
		while (z > 1)
		{
			for (i = 0; i < sizeof(mon[i]); i++)
			{
				if (z >= mon[i])
				{

					i += z / mon[i];
					z = z % mon[i];
				}
			}
		}
		if (z == 1)
			i++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", i);
	return (0);
}
