#include <stdio.h>


void putchar()
{
    int i = 0;
    char c[] = "_putchar";


     while (i < 8)
     {
      _putchar(c[i]);
      i++;  
     }
}

/**
 * main - Print putchar
 * Return: 0, end program
*/

int main(void)
{
     _putchar();
     
}