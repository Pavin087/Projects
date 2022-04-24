#include <stdio.h>
#include <math.h>
int
main ()
{
  int i, c, a, d, SumofAP = 0, SumofGP = 0, Factorial = 1, n, r, temp;
  printf ("What do you want to calculate?\n");
  printf ("1. Sum of AP\n2. Sum of GP\n3. Factorial\n");
  scanf ("%d", &c);
  if (c == 1)
    {
      printf ("\nEnter the First Number of AP : ");
      scanf ("%d", &a);
      printf ("\nEnter the Difference between terms : ");
      scanf ("%d", &d);
      printf ("\nEnter the Number of terms to SUM : ");
      scanf ("%d", &n);
      {
	SumofAP = n * ((2 * a) + ((n - 1) * d)) / 2;
      }
      printf ("%d", SumofAP);
    }
  else if (c == 2)
    {
      printf ("\nEnter First Number of an G.P Series:  ");
      scanf ("%d", &a);
      printf ("\nEnter the Total Numbers in this G.P Series:  ");
      scanf ("%d", &n);
      printf ("\nEnter the Common Ratio:  ");
      scanf ("%d", &r);
      temp = a;
      for (i = 0; i < n; i++)
	{
	  SumofGP = SumofGP + temp;
	  temp = temp * r;
	}
      printf ("\nThe Sum of Geometric Progression Series =  %d\n", SumofGP);
    }
  else if (c == 3)
    {
      printf ("\nEnter the Factorial to be found:");
      scanf ("%d", &a);
      if (a > 1)
	{
	  for (i = 1; i < a + 1; i++)
	    {
	      Factorial = i * Factorial;
	    }
	  printf ("%d", Factorial);
	}
      else
	{
	  printf ("1");
	}
    }
  else
    {
      printf ("Invalid Input");
    }
  return (0);

}
