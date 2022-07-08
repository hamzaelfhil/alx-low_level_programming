#include "main.h"

/**
 * print_triangle- prints triangle ..
 *
 * @size: input size triangle
 *
 * Retrun: void
*/

void print_triangle(int size)
{
	int i = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{

		while (i <= size)
		{
			int c = 1;

			while (c <= size)
			{
				if ((i + c) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				++c;
			}
			++i;
			_putchar('\n');
		}
	}
}
