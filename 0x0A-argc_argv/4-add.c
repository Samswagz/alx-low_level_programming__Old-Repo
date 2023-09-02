#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * isNumeric - A function that adds two numbers
 * @str: string to be checked
 * Return: 0
 */

int isNumeric(const char *str)

{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - A function that adds two numbers
 * @argc: Int argument
 * @argv: char argument
 * Return: argument
 */

int main(int argc, char *argv[])
{
	int count = 1, sum = 0;

	while (count < argc)
	{
		if (isNumeric(argv[count]) == 0)
		{
			puts("Error");
			return (1);
		}
		sum = sum + atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}

