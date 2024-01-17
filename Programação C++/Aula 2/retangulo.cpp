/* desenvolva um programa onde o usuario informe a base e a altura de
 um retangulo e o programa calcule e exiba a respectiva área */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	float base, alt;
	
	setlocale(LC_ALL,"");
	printf("***************************************\n");
	printf("*         PROGRAMA RETÂNGULO          *\n");
	printf("***************************************\n");
	
	printf("Digite o valor da base do retângulo: ");
	scanf("%f", &base);
	
	printf("Digite o valor da altura do retângulo: ");
	scanf("%f", &alt);
	
	float area = base * alt;
	printf("A área do retângulo é de %.2f\n", area);
	
	system("pause");
}

