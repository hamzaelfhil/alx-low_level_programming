#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to char - destination ..
 * @src: pointer to char - source ..
 * @n: unsigned int
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
