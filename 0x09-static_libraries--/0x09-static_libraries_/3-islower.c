#include "main.h"
/**
 * _islower - A program to print lower case characters
 * @c: The character to be checked
 * Return: 1 for lower case characters and 0 for upper case characters
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
