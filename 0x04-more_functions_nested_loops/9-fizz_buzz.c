#include <stdlib.h>

/**
 * main - Prints the numbers from 1-100 but multiples of three,
 *        Fizz is printed in place of no, Buzz in place of multiples
 *        of 5
 *Return : Always 0;
 */
int main (void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n%5) == 0)
		{
			printf("FizzBuff");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);

		}
		

