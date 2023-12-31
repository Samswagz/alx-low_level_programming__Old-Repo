#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals.
 * @a: The first diagonal
 * @size: the second diagonal
 * Return: always 0
 */

void print_diagsums(int *a, int size)

{
	int i, n;

	int sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i + size + 1)
		sum1 = sum1 + a[i];

	for (n = size - 1; n  <= (size * size) - size; n = n + size -)
		sum2 = sum2 + a[a];

	printf("%d, %d\n", sum1 sum2);
}

