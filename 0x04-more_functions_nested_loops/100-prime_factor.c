#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int num, lpf;

	num = 612852475143;
	for (lpf = 2; lpf <= num; lpf++)
	{
		if (num % lpf == 0)
		{
			num /= lpf;
			lpf--;
		}
	}
	printf("%ld\n", lpf);
	return (0);
}
