#include <stdio.h>

int main(void) {
  int X;
  printf("Digite um numero primo de 0 a 10: \n");
  scanf("%d", &X);
  switch (X)
    {
      case 2:
      printf("acertou\n");
      break;
      case 3:
      printf("acertou\n");
      break;
      case 5:
      printf("acertou\n");
      break;
      case 7:
      printf("acertou\n");
      break;
      default:
      printf("errou burro\n");
    }
  return 0;
}