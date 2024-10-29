#include <stdio.h>

int main(void) {

  int Informações;
  int Pessoa;
 printf("\nQual integrante?");
 printf("\n 1-Pedro");
 printf("\n 2-Rafael ");
 printf("\n Escolha o numero correspondente ao integrante que deseja: ");
 scanf("%d", &Pessoa);
  

    printf("\nQual informação?");
    printf("\n 1-Dia do nascimento");
    printf("\n 2-Mes do nascimento");
    printf("\n 3-Ano do nascimento");
    printf("\n 4-Altura");
    printf("\n 5-Peso");
    printf("\n Escolha o numero correspondente a informação que deseja: ");
    scanf("%d", &Informações);
  
  switch(Pessoa){
    case 1:
  
      switch (Informações) {
        case 1: printf("\n Dia do nascimento: 22");
    break;
        case 2:
    printf("\n Mes do nascimento: Maio");
  break;
        case 3:
     printf("\n Ano do nascimento: 2006");
    break;
        case 4:
     printf("\n Altura: 1,76");
   break;
        case 5:
    printf("\n Peso: 78Kg");
    break;
    }
    break;
    case 2:

        switch (Informações) {
        case 1: printf("\n Dia do nascimento: 22");
    break;
        case 2:
    printf("\n Mes do nascimento: Dezembro");
  break;
        case 3:
     printf("\n Ano do nascimento: 2005");
    break;
        case 4:
     printf("\n Altura: 1,73");
   break;
        case 5:
    printf("\n Peso: 60Kg");
    break;      
    }
    break;
    }
  }
  