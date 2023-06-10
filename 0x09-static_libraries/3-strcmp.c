#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or negative int or positive int..
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int ret;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			ret = s1[i] - s2[i];
			break;
		}
		else
		{
			ret = s1[i] - s2[i];
		}
		++i;
	}

	return (ret);
}
