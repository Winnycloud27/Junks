#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

#define CAPS(c) (putchar(c), putchar(c + 32), putchar(' '))
void return_alphabet(void);
int randomNum(void);
char writeWay(char c);


/**
 * main - print a function called return_alphabet()
 * Return: 0 success, end the program
 */
int main(void)
{
	randomNum();
	return_alphabet();
	return (0);
}

/**
 * return_alphabet - A function that print alphabet in lower and upper case
 */
void return_alphabet(void)
{
	char c;

	for (c = randomNum(); c <= 90; c++)
		writeWay(c);
		//CAPS(c);

	putchar('\n');
}

//Using write function
char writeWay(char c)
{
     int d = c + 32;
     int e = 32;

     return(write(1, &c, 1), write(1, &d, 1), write(1, &e, 1));
}

//Using random number
int randomNum(void)
{
int n;
srand(time(0));
n = rand() % (90 - 65 + 1) + 65;
printf("%d", n);
return 0;
}

//Using a pointer
void pointerOption(void)
{
	char *str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int pieces = 25;
	int *p = &pieces;

	pieces = 43;

	printf("The addresss of variable pieces: %p\n", &pieces);
	printf("The addresss of pointer p: %p\n", p);

	printf("The total of variable pieces: %d\n", &pieces);
	printf("The total of pointer p: %d\n", p);

	return (0);
}