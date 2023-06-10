#include "main.h"

/**
 * _memset - fills memory with a constant byte*
 * @s: pointer t0 char
 * @b: character
 * @n: unsigned integer
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
