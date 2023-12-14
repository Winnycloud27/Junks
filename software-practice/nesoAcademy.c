#include <stdio.h>

int increment()
{
    static int num = 0;
    num = num + 1;
    
    return num;
}

int main()
{
    int count = increment();

     /*count = increment();
     count = increment();*/

     for (; increment() <= 3; increment())

     printf("%d\n", increment());
     return 0;
}