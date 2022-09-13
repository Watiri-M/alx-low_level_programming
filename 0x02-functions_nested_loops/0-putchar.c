#include "main.h"



/**
 *
 *  * main – Entry point
 *
 *   * Description: prints _putchar, followed by a new line
 *
 *    * Return: zero
 *
 *     */

int main(void)

{

		char var[] = "_putchar";

			int i;

				int lenVar = sizeof(var) / sizeof(var[0]);



					for (i = 0; i < lenVar - 1; i++)

							{

										_putchar(var[i]);

											}

						_putchar('\n');



							return (0);

}


