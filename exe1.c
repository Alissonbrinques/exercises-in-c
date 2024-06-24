/*Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

float val;

setlocale(LC_ALL, "Portuguese");
printf("\n------valores de metros para decímetro,centimetros e milimetros------\n");
printf("\nDigite um valor: ");
scanf("%f", &val);

if(val > 0){
printf("Valor em Decímetros: %0.f \n", val*10);
printf("Valor em centímetros: %.0f \n", val*100);
printf("valor em Milímetros: %0.f \n", val*1000);
}
else{
printf("Valor inválido");
}

system("pause");
return 0;

}


