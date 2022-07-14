#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: string
 * Return: the pointer to string
*/

char *leet(char *s)
{
	int c = 0, i;

	int ll[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int rn[] = {52, 51, 48, 55, 49};

	while (*(s + c) != '\0')
	{
		i = 0;
		while (i < 5)
		{
			if (*(s + c) == ll[i] || *(s + c) == ul[i])
			{
				*(s + c) = rn[i];
				break;
			}
			++i;
		}
		++c;

	}

	return (s);
}
