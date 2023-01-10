#include "main.h"

/**
 * _strlen - count array
 * @s: array of elements
 * Return: i
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concartinates two strings
 * @s1:first array
 * @s2: second array
 * Return: Always a dynamic array
 */

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size = (_strlen(s1) + _strlen(s2) + 1);

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)

		*(dst + i) = *(s2 + j);
	for (j = 0; *(s2 + j) != '\0'; i++)
	{
		*(dst + i) = *(s2 + j);
		i++;
	}
	return (dst);
}
