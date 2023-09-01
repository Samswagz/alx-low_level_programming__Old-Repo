#include "main.h"
/**
 * _isdigit - A code that return integers that are less than 1
 * @c: An integer value
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
