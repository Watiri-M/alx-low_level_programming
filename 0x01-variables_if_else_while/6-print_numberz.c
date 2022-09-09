#include <stdio.h>

/**
 *
 *  * main: Entry point
 *
 *   *Description: prints all single digit numbers of base 10 starting from 0
 *
 *    * Return: 0
 *
 *     */

int main(void)

{

		int h;



			for (h = 0; h <= 9; h++)

					{

								putchar((h % 10) + '0');

									}

				putchar('\n');

					return (0);

}

