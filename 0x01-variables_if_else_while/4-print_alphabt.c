#include <stdio.h>
/**
 * main - A program that prints alphabet
 * Return: always 0
 */
int main(void)
{
	char a[] = "abcdfghijklmnoprstuvwxyz\n";
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
	}
	return (0);
}
