#include <stdio.h>
#include<math.h>

 

int A,B,C;

 

float delta(int a, int b, int c){
  return(b*b-(4*a*c));
}

 

float x1(int a, int b, float delta){
  return((-b + pow(delta,0.5))/(2*a));
}

 

float x2(int a, int b, float delta){
  return((-b - pow(delta,0.5))/(2*a));
}

 

int main(void) {

 

  float valorDelta, valorX1, valorX2;

  printf("Insira o valor de A:");
  scanf("%d",&A);

  printf("Insira o valor de B:");
  scanf("%d",&B);

  printf("Insira o valor de C:");
  scanf("%d",&C);

 

  valorDelta=delta(A,B,C);
  valorX1=x1(A,B,valorDelta);
  valorX2=x2(A,B,valorDelta);

 

  if(valorDelta>0){
  printf("\nDelta = %.2f\nValor de X1 = %.2f\nValor de X2 = %.2f",valorDelta,valorX1,valorX2);
  }
  else if(valorDelta == 0){
     printf("\nDelta = %.2f\nValor de X = %.2f",valorDelta,valorX1);
  }
  else{
     printf("\nDelta = %.2f",valorDelta);
  }
}