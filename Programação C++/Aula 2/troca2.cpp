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
	
	printf("Digite o 1� valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o 2� valor de B: ");
	scanf("%d", &b);
	
	a = a + b;
	b = a - b;
	a = a - b;

	printf("VALOR FINAL de A � %d\n", a);
	printf("VALOR FINAL de B � %d\n", b);
	
	system("pause");
}
