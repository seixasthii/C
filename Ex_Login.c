#include <stdio.h>

int main(void) {
  int x=1910,senha,c=0;
  do
    {
      printf("digite a senha: \n");
      scanf("%d", &senha);
      c++;
    }
    while(senha != x && c<3);
  if (senha==x && c<=3)
  {
    printf("senha correta");
  }
  else
  {
    printf("limite excedido");
  }
  return 0;
}