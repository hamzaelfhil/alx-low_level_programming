#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power of y
 *@x: first int
 *@y: second int
 * Return: x power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
