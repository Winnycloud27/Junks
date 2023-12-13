#include <stdio.h>

void _recurssed(char *str);

void charact(char *s)
{
    while (*s)
    {
         printf("%c", *s++);
         //*str++;
    }
}

int main(void)
{
    char *str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    //charact(str);
    printf("\n");

/*Using while loop to print str*/
    /*while (*str)
    printf("%c", *str++);*/

    /*Using a recurssed function to print str*/
    //_recurssed(str);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       

    /*Using for loop to print str*/
       



    printf("%s\n", str);
    return (0);
}

void _recurssed(char *str)
{
    if (*str)
    {
        printf("%c", *str);
        _recurssed(str + 1);
    }
    else
    {
        printf("%c", '\n');
    }
}
