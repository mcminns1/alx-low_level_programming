#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
*/
void print_alphabet(void);
int main(void)
{
	print_alphabet;
	putchar('\n');
	return (0);
}

/**
 * print_alphabet - loop
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alphabets = 'a';
	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
}
