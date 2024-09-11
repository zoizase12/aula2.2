#include <stdio.h>

int main() {

int numero1;
int numero2;
float numero3;

  printf("entre com o primeiro numero inteiro:"); 
  int deu_certo = scanf("%i", &numero1);

  printf("entre com o segundo numero inteiro:");
  deu_certo = scanf("%i", &numero2);

  printf("entre com outro numero decimal: ");
  deu_certo = scanf("%f", &numero3);


  int soma = numero1 + numero2;
  int subtracao = numero1 - numero2;
  int multiplicacao = numero1 * numero2;
  float divisao = numero1 / numero2;
  int resto = numero1 % numero2;
  int fracao = numero1 / numero3;


  printf("%i + %i = %i\n", numero1, numero2, soma);
  printf("%i - %i = %i\n", numero1, numero2, subtracao);
  printf("%i x %i = %i\n", numero1, numero2, multiplicacao);
  printf("%i / %i = %f\n", numero1, numero2, divisao);
  printf("%i %% %i = %i\n", numero1, numero2, resto);
  printf("%i / %f = %i\n", numero1, numero3, fracao);

  return 0;
}