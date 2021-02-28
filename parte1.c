#include <stdio.h>

int main(void) {
  printf("Bom dia :D, \nSeja bem-vindo ao canal de Atendimento da loja CYBER-FAFIBE\n");
  printf("Para poder começar a responder:\n \tPor favor indique o seu nome completo:\n\t\t");
  char nome[50];
  scanf("%s",nome);
  printf("\tPor Favor indicar seu telefone(somente os 11 numeros):\n\t\t");
  char telefone[11];
  scanf("%s",telefone);
  printf("\n\tBem-vindo %s, com telefone: %s \n\tO link correspondente a este código está no seguinte link:\n",nome,telefone);  
  printf("\n\t#SCRATCH#%s\n","XXXXXXX");
  return 0;
}