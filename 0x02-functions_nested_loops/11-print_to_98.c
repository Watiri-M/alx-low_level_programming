#include <stdio.h>

#include "main.h"



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

void print_to_98(int n)

{

		int i;



			if (n < 98)

					{

								for (i = n; i <= 98; i++)

											{

															if (i != 98)

																				printf("%d, ", i);

																		else

																							printf("%d\n", i);

																				}

									}

				else if (n > 98)

						{

									for (i = n; i >= 98; i--)

												{

																if (i != 98)

																					printf("%d, ", i);

																			else

																								printf("%d\n", i);

																					}

										}

					else

							{

										printf("%d\n", n);

											}

}


