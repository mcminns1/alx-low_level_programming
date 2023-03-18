#include <stdio.h>
/* more headers goes there */
/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
/* betty style doc for function main goes there */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
