#include <stdio.h>

/**
* main - prints its name, followed by new line
* @argc: number of command line arguments
* @argv: array that contains the program command line arguments
* return: 0 - success
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);
	return (0);
}
