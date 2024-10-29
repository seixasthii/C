#include <stdio.h>

int main(void) 
{
  float NUM;
  float FAT=1;
  float CONT=1;
  printf("Qual numero deseja saber fatorial? ");
  scanf("%f",&NUM);
  do 
    {
      FAT*=CONT;
      CONT++;
    }
    while (CONT<=NUM);
  printf("O valor fatorial de %.2f é %.2f", NUM,FAT);
}