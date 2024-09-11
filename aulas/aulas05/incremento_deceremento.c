#include <stdio.h>

int main() {
int numero;
  printf("entre com o numero inteiro: ");
  int incremento = numero;
  int pos_incremento = incremento++;
  int pre_incremento = ++incremento;

  int decremento = numero;
  int pos_decremento = decremento--;
  int pre_decremento = --decremento;

  printf(" o incremento do numeor %i e %i\n", numero, incremento);
  printf(" o pre-incremento é %i e o pos-incremento é %i\n", pre_incremento, pos_incremento);
  printf(" o decremento do numeor %i e %i\n", numero, decremento);
  printf(" o pre-decremento é %i e o pos-decremento é %i\n", pre_decremento, pos_decremento);
    

  return 0;
}