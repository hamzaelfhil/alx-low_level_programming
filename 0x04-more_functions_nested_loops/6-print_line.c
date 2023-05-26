#include "main.h"

/**
 * print_line - draws a straight line ..
 *
 * @n: input n nomber of times of _
 *
 * Retrun: void
*/

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		++i;
	}
	_putchar('\n');
}
