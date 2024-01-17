/*Um pedreiro afim de evitar desperdicios necessita de um programa que auxilie a determinar a quantidade de tijolos neccessária para levantar um muro.
Sabendo que, para cada tijolo são usadas 150g de argamassa, desenvolva o programa que calcule a quantidade de tijolos e argamassa necessarias para levantar o muro */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,""); 

	printf("******************************************** \n");
	printf("*           PORGRAMA DE PEDREIRO           * \n");
	printf("******************************************** \n");
	
	float largmur, altmur, largtij, altij, quant, quantarg;
	
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
	quantarg = quant * 0.15;
	
	printf("Irão ser usados %.0f tijolos no muro \n\n",quant);
	printf("Será utiliazados %.1f KG de argamassa \n", quantarg);
	
	system("pause");
}


