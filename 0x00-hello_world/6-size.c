#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int 1;
	long long int 11;
	float f;

	printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %1u byte(s)\n", (unsigned long)sizeof(1));
	printf("Size of a long long int: %1u byte(s)\n", (unsigned long)sizeof(11));
	printf("Size of a float: %1u byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
