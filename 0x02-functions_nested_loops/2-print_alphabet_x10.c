#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10 .. _putchar
 *
 * No Return required ..
*/

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for  (i = 0; i < 10; ++i)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
