#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: Area to fill with the bytes
 * @b: The constant byte to be filled
 * @n: the number of bytes to be filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
