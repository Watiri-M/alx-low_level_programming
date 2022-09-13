#include "main.h"



/**
 *
 *  * main- check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

void jack_bauer(void)

{

		int hrs, mins;



			for (hrs = 0; hrs < 24; hrs++)

					{

								for (mins = 0; mins < 60; mins++)

											{

															_putchar(hrs / 10 + '0');

																		_putchar(hrs % 10 + '0');

																					_putchar(':');

																								_putchar(mins / 10 + '0');

																											_putchar(mins % 10 + '0');

																														_putchar('\n');

																																}

									}

}


