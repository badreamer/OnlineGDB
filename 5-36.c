/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int recHanoi (int num, int current, int final, int temp)
{
    if (num == 1)
    {
      printf ("Move 1 from %d -> %d\n", current, final);
    }
  else
    {
      recHanoi (num - 1, current, temp, final);
      printf ("Move %d from %d -> %d\n", num, current, final);
      recHanoi (num - 1, temp, final, current);
    }
}

int main ()
{
  recHanoi (4, 1, 3, 2);

  return 0;
}
