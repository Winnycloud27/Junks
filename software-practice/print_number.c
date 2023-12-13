#include <stdio.h>

void cat(void);

int main()
{
    cat();
    putchar('\n');
    return 0;
}

void cat(void)
{

    int x = 0;
    
    for (; x <= 100; x++)
    {   
        putchar((x / 10)+ '0');
        //putchar((x % 10) + '0');
        putchar(' ');
    }
    
}
