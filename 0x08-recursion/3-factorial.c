#include "main.h"

/**
*factorial - factorial of a given number
*@n: given number
*return: factorial value
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	n *= factorial(n - 1);
	return (n);
}
