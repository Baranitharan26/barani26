#include <stdio.h>
#include <conio.h>
 
void main()
{
 int i, N, sum = 0;
 
 clrscr();
 
 printf("Enter an integer number\n");
 scanf ("%d", &N);
 
 for (i=1; i <= N; i++)
 {
  sum = sum + i;
 }
 
 printf ("Sum of first %d natural numbers = %d\n", N, sum);
}
