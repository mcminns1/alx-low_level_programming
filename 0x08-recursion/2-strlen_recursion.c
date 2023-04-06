#include "main.h"

/**
*_strlen_recursion - checks the length if a string
*@s: string to be checked
*Return: length of the string
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
