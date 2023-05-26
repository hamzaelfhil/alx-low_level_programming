#include "main.h"

/**
 * more_numbers - print 0 to 14 x10 \n
*/

void more_numbers(void)
{
	int i, n, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 15; c++)
		{
			n = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				n = c % 10;
			}
			_putchar(n + 48);

		}
		_putchar('\n');
	}
}
