#include "main.h"
/**
 * _strchr - A string that prints character
 * @s: The sring to which the character will be returned
 * @c: The pointer where the character is returned
 * Return: the pointer
 */

char *_strchr(char *s, char c)

{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
