#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
setlocale(LC_ALL, "portuguese");
float p1=0.09,p2=0.4,v1,v2,vf,aux;
printf("Calculadora de preços! {Desenvolvida pelo Filipe}");
printf("\n\nDigite o preço de compra: ");
scanf("%f", &v1);
aux = v1 * p1;
vf = v1 + v2; 
aux = 0;
aux = vf * p2;
vf = vf + aux;

printf("\n\nValor para venda: %.2f",vf);
printf("\n\n");

system ("pause");
system("cls");
main();
}
	

