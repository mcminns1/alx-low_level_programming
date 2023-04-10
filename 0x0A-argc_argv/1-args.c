#include <stdio.h>

/**
* main - prints number of arguments
*@argc: number of line arguments
*@argv: array that contains the program command line arguments
*return: 0
*/

int main(int argc,char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
