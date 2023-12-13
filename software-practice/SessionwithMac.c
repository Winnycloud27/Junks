#include <stdio.h>
#include <string.h>

void name(void)
{
	printf("My name is Winner Ezinne\n");
}

void biodata()
{
	string name;
	string address;
	int DOB;

	printf("Enter your name: \n");
	scanf("%ls", &name);
	printf("Enter your address: \n");
	scanf("%ls", &address);
	printf("Enter your DOB: \n");
	scanf("%d", &DOB);
}

int main(void)
{
	name();
	biodata();
	biodata();
	return 0;
}
