#include "main.h"



void _print_values(int);



/**
 *
 *  * main - check the code.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

void print_times_table(int n)

{

		if (n <= 15)

				{

							int i, j;



									for (i = 0; i <= n; i++)

												{

																for (j = 0; j <= n; j++)

																				{

																									int k = i * j;



																													if (k / 100)

																																		{

																																								_print_values(k);

																																												}

																																	else if (k / 10)

																																						{

																																												if (j > 0)

																																																		{

																																																									_putchar(' ');

																																																														}

																																																	_print_values(k);

																																																					}

																																					else

																																										{

																																																if (j > 0)

																																																						{

																																																													_putchar(' ');

																																																																			_putchar(' ');

																																																																								}

																																																					_print_values(k);

																																																									}



																																									if (j < n)

																																														{

																																																				_putchar(',');

																																																									_putchar(' ');

																																																													}

																																												}

																			_putchar('\n');

																					}

										}

}







/**
 *
 *  * main - check the code.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

void _print_values(int val)

{

		if (val / 100)

				{

							int n1;

									int n2;

											int n3;



													n1 = val / 100;

															n2 = (val % 100) / 10;

																	n3 = val % 10;

																			_putchar('0' + n1);

																					_putchar('0' + n2);

																							_putchar('0' + n3);

																								}

			else if (val / 10)

					{

								int n1;

										int n2;



												n1 = val / 10;

														n2 = val % 10;

																_putchar('0' + n1);

																		_putchar('0' + n2);

																			}

				else

						{

									_putchar('0' + val);

										}

}


