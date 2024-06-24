/*Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int n;
printf("Digite um valor decimal: \n");
scanf("%d", &n);

printf("\n\nValor em Hexa: %d\n", n*100);
printf("\nValor em Octal: %d\n", n*1000);

  system("pause");
  return 0;
}
