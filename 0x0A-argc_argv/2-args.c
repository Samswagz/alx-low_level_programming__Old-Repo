#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: An integer argument
 * @argv: A character argument
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)

	printf("%s\n", argv[i]);

	return (0);
}
