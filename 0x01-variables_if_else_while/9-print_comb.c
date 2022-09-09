#include <stdio.h>

#include <stdlib.h>

/**
 *
 *  * main : Entry point
 *
 *   * description: prints all possible combinations of single-digit numbers.
 *
 *    * Return: zero
 *
 *     */

int main(void)

{

		int a;



			for (a = 0; a < 10; a++)

					{

								putchar((a % 10) + '0');

										if (a == 9)

														continue;

												putchar(',');

														putchar(' ');

															}

				putchar('\n');

					return (0);

}


