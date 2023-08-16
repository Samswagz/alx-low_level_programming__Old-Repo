#include "main.h"
/**
 * _isalpha - A function that checks for alphabet
 * @c: A function character
 * Return: 1 if successful and 0 if unsuccessful
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z'))
		return (1);
	else
	return (0);
}

