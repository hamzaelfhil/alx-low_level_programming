#include "main.h"

/**
 * print_diagonal - draws a diagonal line ..
 *
 * @n: input n nomber of times of \
 *
 * Retrun: void
*/

void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{

		while (i < n)
		{
			int c = 0;

			while (c < i)
			{
				_putchar(' ');
				++c;
			}

			++i;
			_putchar(92); /** 92 == \ */
			_putchar('\n');
		}
	}
}
