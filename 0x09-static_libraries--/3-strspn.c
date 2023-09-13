#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: The prefix substring
 * @accept: The length of the sub-prefix
 * Return: The lenghth of the sub-prefix
 */

unsigned int _strspn(char *s, char *accept)

{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
