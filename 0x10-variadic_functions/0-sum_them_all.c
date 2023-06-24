#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: int params
 * Return: 0 if n equals 0 else the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);         /* Initialize the argument list. */

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);    /* Get the next argument value. */

	va_end(ap);                  /* Clean up. */
	return (sum);
}
