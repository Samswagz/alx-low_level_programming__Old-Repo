#include "main.h"
/**
 * swap_int - A code that swaps
 * @a: The first integer
 * @b; the second integer
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
