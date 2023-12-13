#include <stdio.h>
#include <math.h>

int add(int var1, int var2, int var3);

int main()
{
	int a, b, c; 
	a = b = c = 6;

	add(a, b, c);
	return 0;
}

int add(int x, int y, int z)
{

	int var1, var2, var3, result;
	result = var1 + var2 + var3;

	//printf("%d\n", result);
	return result;
}
