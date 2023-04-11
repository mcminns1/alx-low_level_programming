#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int x, y, len1, len2, len3;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		x = 0;
		while (s1[x++] != '\0');
			len1++;
	}

	if (s2 != NULL)
	{
		y = 0;
		while (s2[y++] != '\0');
			len2++;
	}

	len3 = len1 + len2;
	result =  (char *)malloc(sizeof(char) * (len3 + 1));
	if (result == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
		result[x] = s1[x];
	for (y = 0; y < len2; y++, x++)
		result[x] = s2[y];
	result[len3] = '\0';

	return (result);
}
