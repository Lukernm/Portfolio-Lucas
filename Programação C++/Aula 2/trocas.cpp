/*Desenvolva um programa onde o usuario informe dois valores
inteiros, armazenando-os respectivamente nas variaveis A e B.
Fa�a um algoritmo que troque o valor das variaveis*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");

	printf("***************************************\n");
	printf("*           PROGRAMA TROCAS           *\n");
	printf("***************************************\n");
	
	int a, b, aux;
	printf("Digite o 1� valor: ");
	scanf("%d",&a);
	
	printf("Digite o 2� valor: ");
	scanf("%d",&b);
	
	// efetuando trocas
	
	aux = a;
	a = b;
	b = aux;
	
	printf("VALOR FINAL de A � %d\n", a);
	printf("VALOR FINAL de B � %d\n", b);
	
	system("pause");
}
