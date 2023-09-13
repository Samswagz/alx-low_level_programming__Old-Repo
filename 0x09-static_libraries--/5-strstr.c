#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: A funtion that locates substring
 * @needle: the needle in the string
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
