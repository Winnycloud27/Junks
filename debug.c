#include <stdio.h>

/**
 * jack_bauer4 - function
 */
void jack_bauer4(void)
{	
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
		printf("%02d:%02d\n", h, m);
		}	
	}
	printf("New Time Posting\n");
}
int main()
{
	jack_bauer4();
}
