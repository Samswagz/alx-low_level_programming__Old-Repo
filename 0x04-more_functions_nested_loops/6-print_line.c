#include "main.h"
/**
 * print_line - A code that prints a stright line
 * Return: always 0
 * @n: the number of times _ is to be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		
	}
	_putchar('\n');
}
