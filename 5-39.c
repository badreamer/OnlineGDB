/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int gcd (int x, int y)
{
  if (y == 0)
    return x;
  else
    return gcd (y, (x % y));
}

int main ()
{
  int x = 0, y = 0;
  printf ("Enter two numbers:");
  scanf ("%d %d", &x, &y);
  printf ("GCD is %d", gcd (x, y));
  return 0;
}
