#include "main.h"
/**
 * print_last_digit - A fuction that prints last digit integers
 * @a: an assigned integer value
 * Return: b
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
	{
		b = b * -1;
	}
	_putchar(b + '0');
	return (b);
}
