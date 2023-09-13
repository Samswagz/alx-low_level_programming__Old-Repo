#include <stdio.h>
#include <stdlib.h>

char fun();

int main()

{
	char c = fun();
	printf("%c\n", c);
}

char fun()
{
	char a;
	return 'a';
}
