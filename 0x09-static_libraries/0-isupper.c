#include "main.h"

/**
 * _isupper - check for uppercase character ..
 *
 * @c: input char ..
 *
 * Return: 1 if c is upper otherwisse 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
