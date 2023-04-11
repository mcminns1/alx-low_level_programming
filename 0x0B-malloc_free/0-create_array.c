#include "main.h"

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	int i;

	if (size == 0)
		return (NULL);

	x = malloc(sizeof(c) * size);

	if (x == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		x[i] = c;

	return (x);

}
