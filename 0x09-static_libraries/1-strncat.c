#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: integer
 * Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int s, s2;

	s = 0;
	s2 = 0;

	while (dest[s])
		++s;

	while (s2 < n && src[s2] != '\0')
	{
		dest[s + s2] = src[s2];
		++s2;
	}

	dest[s + s2] = '\0';

	return (dest);
}
