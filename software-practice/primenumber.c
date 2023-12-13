#include <stdio.h>

/**
 * primeNumbers - When called will print out a given prime number
 * Return: prime
 */
int primeNumber(int prime)
{
	if (prime <= 1)
	{
		return 0;
	}
	int x = 2;

	while (x * x <= prime)
	{
		if(prime % x == 0)
			return 0;
			x++;
	}
	return 1;
}

int main(void)
{
	int c = 8;
	primeNumber(c);
	if(primeNumber(c))
	{
	printf("%d Is a prime number\n", c);
	}
	else
	{
		printf("%d Is not a prime number\n", c);
	}
	return 0;
}

	
