/**#include <stdio.h>

// Example 1

int main (int argc, char *argv[])
{
  int count;

  printf ("This program was called with \"%s\".\n",argv[0]);

  if (argc > 1)
    {
      for (count = 1; count < argc; count++)
	{
	  printf("argv[%d] = %s\n", count, argv[count]);
	}
    }
  else
    {
      printf("The command had no other arguments.\n");
    }

  return 0;
}*/

//Example 2

/**
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
        while(argc--)
                printf("%s\n", *argv++);
        exit(EXIT_SUCCESS);
}
*/

// Example 3

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** agrv)
{
  int i, sum = 0;

  printf("argc = %d\n", argc);
  printf("The content of agrc\n");
  if (argc > 1)
  {
    for (i = 1; i < argc; i++)
    {
          printf("argv[%d] = %s\n", i, agrv[i]);
          sum += atoi(agrv[i]);
    }
    printf("The total is %d\n", sum);
  }
  else
  printf("This program was run with \"%s\".\n", agrv[0]);
  return (0);
}
