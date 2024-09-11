#include <stdio.h>

int main(){
char tecla = '\0'; //caractere nulo
  printf("digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar();

  printf("voce digitou: %c\n", tecla);
  printf("digite outra tecla: "); 
  deu_certo = scanf("%c", &tecla);
  printf("voce digitou: %c\n", tecla);
  char nome[31];
  printf("digite um nome: ");
  deu_certo = scanf("%c", nome);
  printf("voce digitou: %c\n", nome);
  char nome[31];
  printf("digite um nome: ");
  deu

  return 0;
}