#include "main.h"

/**
 * reverse_array - reveerse the content of an array of integers
 * @a: pointer of int
 * @n: int
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int temp;

	int s = 0;

	int e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		++s;
		--e;
	}
}
