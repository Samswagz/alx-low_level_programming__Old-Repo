#include "main.h"

/**
 * print_array - Array printing
 * @a: Array rows
 * @n: Array colunms
 * Return: void
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
