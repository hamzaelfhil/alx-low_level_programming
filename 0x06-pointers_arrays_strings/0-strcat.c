#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: a pointer to the resulting string dest..
*/

char *_strcat(char *dest, char *src)
{
	int s, s2;

	s = 0;
	s2 = 0;

	while (dest[s])
		++s;

	while (src[s2])
	{
		dest[s++] = src[s2];
		++s2;
	}

	return (dest);
}
