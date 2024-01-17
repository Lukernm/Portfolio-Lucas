/* um treinador de basquete necessita distribuir seus atletas em niveis de acordo com altura de cada um.
NÍVEL A - Até 1,70
NIVEL B - Até 1,71 --> 1,80
NIVIL C - Até 1,81 --> 1,90
NIVEL D - Acima de 1,90
ao termino da distribuiçao devera o treinador deve saber quantos atletas  foram encaminhados para cada nivel
e deberta ser exibida em tela, a altura do menor jogador, que sera excluido do time
faça um programa que melhor solucione o problema descrito */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	int categoria;
	int nivelA, nivelB, nivelC, nivelD;
	int total;
	float altura;
	char nomeCat[30];
	
	
	setlocale(LC_ALL,""); 
	

		printf("******************************************** \n");
		printf("****         PORGRAMA BASQUETE          **** \n");
		printf("******************************************** \n");
		
		printf("Digite a altura do jogador: ");
		scanf("%f", &altura);
		

	printf("\n\n");
	system("pause");
}

