#include <stdio.h>



/**
 *
 *  * main - check the code.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

		int F;

			long n1;

				long n2;

					long outcome;



						F  = 1;

							n1 = 1;

								n2 = 2;

									while (F <= 50)

											{



														if (F > 2)

																	{

																					if (F < 50)

																									{

																														outcome = (n2 + n1);

																																		printf("%ld, ", outcome);



																																						n1 = n2;

																																										n2 = outcome;

																																													}

																								else

																												{

																																	outcome = (n2 + n1);

																																					printf("%ld", outcome);

																																								}



																										}

																else

																			{

																							printf("%d, ", F);

																									}

																		F++;

																			}

										printf("\n");



											return (0);

}


