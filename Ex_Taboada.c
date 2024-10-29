#include <stdio.h>

int main(void) 
{
  int X,N;
  printf("digite um numero de 1 a 10: ");
  scanf("%d", &X);
  for (N=1; N<=10; N++)
    {
    printf("%d x %d= %d\n", X,N,X*N);
    }
  return 0;
}