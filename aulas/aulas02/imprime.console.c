#include <stdio.h> // biblioteca padrão de entrada e saída

int main() {
  printf("alberto viado\n\n");

  // imprime um numero inteiro
  printf("%i\n", 10);
  printf("%i %i\n", 11, 22);
  printf("%5i\n", 110);
  printf("%05i\n", 1);
    // imprime um numero decimal
  printf("%f\n", 3.14);
  printf("%10.2f\n", 10.5888);
  // imprime um caractere aspas simples
  printf("%c\n", 'A');
  // imprime uma string
  printf("%s\n", "alberto corno");
  printf("%30s!\n","alberto manso");



  return 0;
}