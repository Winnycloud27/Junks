#include <stdio.h>

/**
 * givenInput - Will determine input we called up
 */
void givenInput(int x, char c)
{
	if(c = a && c <= z)
	{
		printf("The given input is alphabet\n");
	}
	//else if(c = 97 && c <= 122)
	//{
		//printf("The given input is small letter");
	//}
	else if(x = 1 && x <= 9)
	{
		printf("The given input is digit\n");
	}
	else if(x = 48)
	{
		printf("The given input is just a zero\n");
	}
	else
	{
		printf("Invalid input, try again!");
	}
}

/**
 * main - Will determine input, if digit, alphabet or zero.
 *
 * Return: 0 successful, end program.
 */
int main(void)
{
	int input;
	char alpha;

	printf("Enter an input: \n");
	scanf("%d %c", &input, &alpha);

	givenInput(input, alpha);
	return 0;
}
