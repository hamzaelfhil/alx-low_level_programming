#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of charts
 * initialzes it with a specific char
 * @size: unsigned int
 * @c: char.
 * Return: pointer to char, NUll if size equals 0
*/

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(c) * size);

	if (ar == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
