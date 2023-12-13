#include <stdio.h>

int main()
{
	char upper = 'A';
	char lower = 'a';

	while (upper <= 'Z')
	{
	putchar(upper);
	putchar(lower);
	upper++;
	lower++;
	}
	putchar('\n');
	return 0;
}
