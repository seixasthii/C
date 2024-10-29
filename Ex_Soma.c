#include <stdio.h>

int main(void)
{
  int N,S,X;
  S=0;
  printf("insira um valor de 0 a 10000: ");
  scanf("%i", &X);
  for(N=0;N<=X;N++)
  S=S+N;
  printf("%i\n",S);
}