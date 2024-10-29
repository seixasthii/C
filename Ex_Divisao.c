#include <stdio.h>

int main(void)
{
  int N,S,X;
  printf("insira um valor: ");
  scanf("%i", &X);
  printf("insira um divisor: ");
  scanf("%i", &S);
  {
  for(N=0;N<=X;N=N+S)
  printf("%i\n",N);
  }
}