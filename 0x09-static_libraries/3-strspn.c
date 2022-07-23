#include "main.h"

/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, b;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		b = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				b = 0;
				break;
			}
			j++;
		}
		if (b == 1)
			break;
		i++;
	}

	return (i);
}
