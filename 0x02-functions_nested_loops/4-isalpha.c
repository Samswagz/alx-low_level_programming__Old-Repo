#include "main.h"
/**
 * _isalpha - A function that checks for alphabet
 * @c: A function character
 * Return: 1 if successful and 0 if unsuccessful
 */
int _isalpha(int c)
{
	if ((c <= 65 && c <= 97) || (c <= 97 && c <= 122))
	{
		return (1);
	}
	return (0);

}
