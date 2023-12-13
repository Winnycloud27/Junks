#include <stdio.h>

int main(void)
{
    int testArray[5] = {2, 5, 0, 1, 7};
    int x = 10;
    int i;

    int *ptrX = &x;
    int *ptrArr = testArray;

    for (i = 0; i < 5; i++)
    {
        printf("The index value of testArray[%d] is %d\n", i, *ptrArr + i);
    }

    //printf("The address of variable x is %p\n", &x);
    //printf("The address of variable x is %d\n", *ptrX);
    //printf("The address of variable x is %d\n", *ptrArr);
    return (0);
}