#include "main.h"

/**
 * print_alphabet - prints a to z with _putchar
 *
 * void - no return required!
*/

void print_alphabet(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		_putchar(a);
		++a;
	}
	_putchar('\n');
}
