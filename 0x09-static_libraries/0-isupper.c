#include "main.h"
/**
 * _isupper - A program that checks for upper case
 * @c: A character to be return if c is upper case
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

