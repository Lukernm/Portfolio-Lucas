/*Um pedreiro afim de evitar desperdicios necessita de um programa que auxilie a determinar a quantidade de tijolos neccess�ria para levantar um muro.
Sabendo que, para cada tijolo s�o usadas 150g de argamassa, desenvolva o programa que calcule a quantidade de tijolos e argamassa necessarias para levantar o muro */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,""); 

	printf("******************************************** \n");
	printf("*           PORGRAMA DE PEDREIRO           * \n");
	printf("******************************************** \n");
	
	float largmur, altmur, largtij, altij, quant;
	
	printf("Digite o valor da largura do muro: ");
	scanf("%f", &largmur);
	
	printf("Digite o valor da altura do muro: ");
	scanf("%f", &altmur);
	
	printf("\n");
	
	printf("Digite a largura do tijolo: ");
	scanf("%f", &largtij);
	
	printf("Digite a altura do tijolo: ");
	scanf("%f", &altij);
	
	printf("\n");
	
	quant = (largmur/largtij) * (altmur/altij);
	
	printf("Ir�o ser usados %.2f tijolos no muro \n\n",quant);
	
	int quantij, quantarg;
	
	printf("Digite a quantidade de tijolos que ir� usar: ");
	scanf("%d",&quantij);
	
	quantarg = quantij * 0.15;
	
	printf("Ser� utiliazados %d KG de argamassa \n", quantarg);
	
	system("pause");
}


