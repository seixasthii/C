#include <stdio.h>

int main(void) {
 int S1,S2,S4;
printf("\nS1 identificou uma peça?: ");
printf("\n1 = SIM");
printf("\n2 = Não\n");

scanf("%d",&S1);

if(S1 == 1){
  printf("\nS2 identificou uma peça?: ");
  printf("\n1 = SIM");
  printf("\n2 = NÃo\n");
  scanf("%d", &S2);

  if(S2 == 1){
    printf("\nS4 identificou uma peça?: ");
    printf("\n1 = SIM");
    printf("\n2 = NÃO\n");    
   scanf("%d", &S4);
   
    if(S4 == 1){
      printf("Avança A3");
      printf("\nA peça vai para rampa S7 e desliga M1");
      }
    else{
      printf("Avança A1");
      printf("\nA peça vai para a rampa S5 e desliga M1");
    }
  }
  else{
    printf("Circuito desligado");
  }
  }
  else{
    printf("Circuito desligado");
  }
  }