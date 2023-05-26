#include "main.h"

/**
 * print_square - prints square ..
 *
 * @size: input size square
 *
 * Retrun: void
*/

void print_square(int size)
{
	int i = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{

		while (i < size)
		{
			int c = 0;

			while (c < size)
			{
				_putchar('#');
				++c;
			}

			++i;
			_putchar('\n');
		}
	}
}
