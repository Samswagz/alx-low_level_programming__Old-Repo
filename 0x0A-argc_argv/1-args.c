#include <stdio.h>
/**
 * main - A program that prints number of arguments passed to it
 * @argc: integer argument
 * @argv: character argument
 * Return: argc
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc -1);

	return (0);
}
