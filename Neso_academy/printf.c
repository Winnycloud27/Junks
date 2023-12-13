#include <stdio.h>

int main()
{
	int two = 2, three = 3, six = 6;
	int result = (two + three) * six / three;

	printf("The arithemetics expression is: (%d + %d) * %d / %d ", two, three, six, three);
	printf("and the result is: %d\n", result);
}
