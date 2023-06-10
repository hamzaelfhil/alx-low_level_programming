#include "main.h"

/**
 * _isalpha - check c if is a letter lower or upper..
 *
 * @c: checks input of function
 *
 * Return: 1 if c is letter lorU .. otherwise  0
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
	    (c >= 65 && c <= 90))
		return (1);

	return (0);
}
