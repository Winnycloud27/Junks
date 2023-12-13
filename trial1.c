#include <stdio.h>

int main()
{
	char upper = 'A';
	char lower = 'a';

	do
	{
	putchar(upper);
	do
		{
		putchar(lower);
		lower++;
		}while(lower <= 'z');

	upper++;

	}while(upper <= 'Z');
}
