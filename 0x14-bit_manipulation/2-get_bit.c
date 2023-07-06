#include "main.h"

/**
* get_bit - return the value of a bit at a given
* index
* @n: unsigned long int input
* @index: index of the bit
* Return: value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= 64)
		return (-1);
	return (((n >> index) & 1) ? 1 : 0);
}
