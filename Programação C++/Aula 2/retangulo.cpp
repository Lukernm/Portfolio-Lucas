/* desenvolva um programa onde o usuario informe a base e a altura de
 um retangulo e o programa calcule e exiba a respectiva �rea */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	float base, alt;
	
	setlocale(LC_ALL,"");
	printf("***************************************\n");
	printf("*         PROGRAMA RET�NGULO          *\n");
	printf("***************************************\n");
	
	printf("Digite o valor da base do ret�ngulo: ");
	scanf("%f", &base);
	
	printf("Digite o valor da altura do ret�ngulo: ");
	scanf("%f", &alt);
	
	float area = base * alt;
	printf("A �rea do ret�ngulo � de %.2f\n", area);
	
	system("pause");
}

