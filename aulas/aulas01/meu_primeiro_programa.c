/*
construa um programa que calcule a soma de dois numeros inteiros
*/

#include <stdio.h>
#include <math.h>
int main()  {
    int a, b, soma;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    soma = a + b;
    printf("A soma de %d e %d eh %d\n", a, b, soma);
    printf("Seno de soma eh %f\n", sin(soma));
  return 0;
}