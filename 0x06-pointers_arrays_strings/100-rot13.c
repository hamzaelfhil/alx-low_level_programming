#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: pointer of string s
*/

char *rot13(char *s)
{
	int c = 0, i;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + c) != '\0')
	{
		i = 0;
		while (i < 52)
		{
			if (*(s + c) == input[i])
			{
				*(s + c) = output[i];
				break;
			}
			++i;
		}
		++c;
	}

	return (s);
}
