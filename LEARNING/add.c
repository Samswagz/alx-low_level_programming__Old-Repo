#include <stdio.h>

int add(int a, int b);
int main()
{
	int a = 20, b = 30;
	int sum = add(a, b);
 	printf("%d\n", sum);
}

int add(int a, int b)
{
	return (a + b);
}
