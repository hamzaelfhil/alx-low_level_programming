#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: int number
 * Return: -1 if n < 0 otherwise the factorial of n ..
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
