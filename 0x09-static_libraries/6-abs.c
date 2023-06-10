#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: takes an int input for function
 *
 * Return: Absolute n
*/

int _abs(int n)
{
	if (n <= 0)
		n = (-1) * n;

	return (n);
}
