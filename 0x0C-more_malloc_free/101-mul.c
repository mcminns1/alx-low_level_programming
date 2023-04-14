#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	if (x == 0 || y == 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", x * y);

	return (0);
}
