//*Problemas:
//* Objetivo: Contruir um programa em C para rateio de contas
// Entrada: Valor da conta / Quantidade de pessoas que vão dividir a conta
//Saida: Valor que cada um terá que pagar
//Tem multa o atraso do pagamento ?

#include <stdio.h>
#include <stdlib.h>

int main(){
    
  int qtdspessoas; 
  int multa;
  float aluguel, rateio; 
  float valormulta;
  
  printf("Valor da conta: ");
  scanf("%f",&aluguel);

  printf("Quantidade de pessoas que vao dividir a conta: ");
  scanf("%d",&qtdspessoas);  
  
  printf("Valor a pagar, \n\n\n");

  printf("Tem multa?, Se sim digite 1 se não digite 0: ");
  scanf("%d",&multa);

  if (multa==1){
    printf("Valor da multa: %.2f.\n\n\n");
    scanf("%f",&valormulta);

  }
  
  rateio = (aluguel+multa) / qtdspessoas;

  return 0;
}