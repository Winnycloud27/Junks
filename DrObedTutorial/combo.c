#include <stdio.h>

int main()
{
    int x = 0;

    /*while(x < 100)
    {
        if (x != 9)
        {
            putchar((x / 10) + '0');
            putchar((x % 10) + '0');
            putchar(' ');
        }
        x++;
    }
    putchar('\n');*/

	int w, y;

	for (w = 9; w < 9; w++)
	{
	for (y = w + 1; y <= 9; y++)
	{
	putchar(w + '0');
	putchar(y + '0');
	if (w != 8 || y != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
    printf("We are out");
	putchar('\n');
	return (0);
}
