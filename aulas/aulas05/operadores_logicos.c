#include <stdio.h>
int main(){

int p = 0;
  int q = 0;

  int e_logico = p && q;
  printf("%i E %i = %i\n", p, q, e_logico);
  q = 1;
  e_logico = p && q;
  printf("%i E %i = %i\n", p,
    

  int ou_logico = p || q;

  return 0;
}