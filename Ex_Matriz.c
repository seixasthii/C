/* CHECA INDICE: PAR OU IMPAR*/

#include <stdio.h>
int main(void)
{
int A[8], B[8], N;
for(N=1;N<=8;N++)
{
printf("Informe um valor para o %do elemento do indice: ",N);
scanf("%d",&A[N]);
}
for (N=1;N<=8 ;N++)
B[N]=A[N]*3;

// Apresentação das matrizes
for (N=1;N<=8;N++)
printf("\nA [ %d ] X3= %d", A[N],B[N]);
}