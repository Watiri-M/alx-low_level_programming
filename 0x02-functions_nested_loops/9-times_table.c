nclude "main.h"



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

void times_table(void)

{

		int r, c;



			for (r = 0; r <= 9; r++)

					{

								for (c = 0; c <= 9; c++)

											{

															int temp = r * c;



																		if (temp / 10)

																						{

																											int n1;

																															int n2;



																																			n1 = temp / 10;

																																							n2 = temp % 10;

																																											_putchar('0' + n1);

																																															_putchar('0' + n2);

																																																		}

																					else

																									{

																														if (c > 0)

																																			{

																																									_putchar(' ');

																																													}

																																		_putchar('0' + temp);

																																					}



																								if (c < 9)

																												{

																																	_putchar(',');

																																					_putchar(' ');

																																								}

																										}

										_putchar('\n');

											}

}


