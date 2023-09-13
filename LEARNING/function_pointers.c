#include <stdio.h>
#include <stdlib.h>

/**
 * a code that prints function pointers
 */

int area_rect(int l, int b)
{
	int area = l * b;

	return (area);
}

int main()

{
	int l = 10, b = 5;

	int area = area_rect(l, b);

	printf("%d\n", area);

	l = 6, b = 6;

	area = area_rect(l, b);

	printf("%d\n", area);
}
