/*Desenvolva o mesmo programa sem ter variaveis auxiliares */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");

	printf("***************************************\n");
	printf("*           PROGRAMA TROCAS           *\n");
	printf("***************************************\n");
	
	int a, b;
	
	printf("Digite o 1º valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o 2º valor de B: ");
	scanf("%d", &b);
	
	a = a + b;
	b = a - b;
	a = a - b;

	printf("VALOR FINAL de A é %d\n", a);
	printf("VALOR FINAL de B é %d\n", b);
	
	system("pause");
}
