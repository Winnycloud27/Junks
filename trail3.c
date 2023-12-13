#include <stdio.h>

int main()
{
	char upper = 'A';
	char lower = 'a';

	for ( ; upper <= 'Z' && lower <= 'z'; upper++, lower++);
	{
		putchar(upper);
		putchar(lower);
	}
	printf("You messed up!\n");
	return 0;
}

