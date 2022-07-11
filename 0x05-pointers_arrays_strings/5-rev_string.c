#include "main.h"

/**
 * rev_string - prints reverse string
 * @s: pointer of string
 * Return: void
*/

void rev_string(char *s)
{
	int l = 0;
	int i = 0;
	char ch;

	while (s[l] != '\0')
		++l;

	while (i < l / 2)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
		++i;
	}
}
