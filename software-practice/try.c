#include <stdio.h>
#include <unistd.h>

int main()
{
	char name[] = "MAC DOUGLAS";
	int i = 0;
	char name2[20];

	while (i < 11)
	{
	putchar(name[i]);
	i++;
	}
	putchar('\n');
	printf("Enter your name: \n");
	fgets(name, sizeof name[], stdin);
	putchar('\n');
	

}
