#include <stdio.h>

int main()
{
    /*Printing all the even numbers bt 1 - 20*/
    int x = 1;
    int y = 1;

    for (; x <= 20; x++)
    {
        if(x % 2 == 0)
        {
        printf("%d", x); 
        putchar(' ');
        }
        
    }
    printf("\n");

    while (y <= 20)
    {
        if(y % 2 == 0)
        {
            printf("%d", y);
            putchar(' ');
        }
        y++;
    }
    /*for (y = 'a'; y <= 'z'; y++)
    {
        printf("%d", y); 
        //putchar(' ');
        
    }*/

    printf("\n");
    return 0;
}