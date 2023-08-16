#include "main.h"
/**
 * _abs - A function that prints the absolute value of a number
 * @a: The integer whos absolute value is to be printed
 * Return: abs_val or a
 */

int _abs(int a)

{
	if (a < 0)
	{
		int abs_val;

		abs_val = a * -1;
		return (abs_val);
	}
	else
	{
		return (a);
	}
}
