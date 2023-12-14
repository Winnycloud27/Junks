#include "main.h"

/**
 * rev_string - The function prints the reverse of the string
 * @s: The string being reversed
 *
 * Return: Nothing.
*/

void rev_string(char *s)
{
	int len = _strlen(s);
	int x = 0;
	int c = len - 1;
	char temp;
	s = "My mum";
	len = 7;
	c = 6;


	while (x < c)	(0 < 6)(1 < 6)(2 < 6)(3 < 6)(4 < 6)(5 < 6)
	{
		temp = s[x];		s[0] = M, s[1] = y, s[2] = " ", s[3] = m, s[4] = u, s[5] = m
		s[x] = s[c];		s[6] = m, s[5] = u, s[4] = m, s[3] = " ", s[2] = y, s[1] = M
		s[c] = temp;		temp = My mum
		x++;		0, 1, 2, 3, 4, 5, 6
		c--;		6, 5, 4, 3, 2, 1, 0
	}



}
