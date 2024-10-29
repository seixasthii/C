#include <stdio.h>

int main(void) 
{
  int A, B, S;
  int C, R;
    {  
      printf("informe o primeiro valor: ");
      scanf("%d", &A);
      printf("\n\nInforme o segundo valor: ");
      scanf("%d", &B);
      printf("\n\ninforme o terceiro valor: ");
      scanf("%d", &C);
      S=A+B+C;
      R=S/3;
      
      if (R>=50)
      {
        printf("aprovado %d\n", R);
      }
        else if (R>=46)
        {
          printf("conselho %d\n", R);
        }
        else 
      {
        printf("reprovado %d\n", R);
      }
    }

}