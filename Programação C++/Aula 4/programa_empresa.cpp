/*uma alambique possui em seu quadro de funcionarios pessoas especializadas em vendas que recebem
seus salarios calculados por meio da comissão sobre o valor dos produtos vendidos além do salário fixo.
tal comissão, varia tambem de acordo com o nível do funcionário, como mostra a tabela abaixo:

NÍVEL     /   NOME    / SALÁRIO /    COMISSÃO
---------------------------------------------------
1             ZECA       800,00          5%
2             PEDRO      1000,00         8%
3             NINO       1200,00         10%
4             BIBA       1500,00         15%

A empresa necessita de um programa que auxilie no calculo do sálario final de seus funcionários
de cálculo do sálario final de seus funcionarios de acordo com suas vendas. FAÇA !!!!!!!	 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	int nivel;
	float sfixo, sfinal, com, vendas;
	char nome[6], resp;
	
	setlocale(LC_ALL,""); 
	printf("******************************************** \n");
	printf("*              PORGRAMA EMPRESA            * \n");
	printf("******************************************** \n");
	
do{
		
		
		printf("Digite o nível do funcionário: ");
		scanf("%d", &nivel);
	
		if(nivel == 1){
		
		sfixo = 800;
		com = 0.05;
		strcpy(nome,"Zeca");
		
		}else if(nivel == 2){
		
			sfixo = 1000;
			com = 0.08;
			strcpy(nome,"Pedro");
		
		}else if(nivel == 3){
		
			sfixo = 1200;
			com = 0.1;
			strcpy(nome,"Nino");
			
		}else if (nivel == 4){
		
			sfixo = 1500;
			com = 0.15;
			strcpy(nome,"Biba");
		
		}else{
		
			printf("Nível de funcionário inválido \n\n");
		//	return 0; // sai do programa, exit(0) pode ser usado também
	
	}
	if( nivel >= 1 && nivel <= 4){
	
	system("cls");
	
	printf("******         PORGRAMA EMPRESA       ****** \n\n");
	
	printf("Identificação: %d \n", nivel);
	printf("Funcionário: %s \n", nome);
	printf("Salário-Base: R$%.2f \n", sfixo);
	printf("Comissão: %.0f%% \n\n", com*100);
	
	printf("Digite o total de vendas: R$ ");
	scanf("%f", &vendas);
	
	sfinal = sfixo + (vendas * com);
	
	printf("\n\n");
	printf("Salário Final: R$%.2f", sfinal);
	
}
	
	printf("\n\n");
	printf("Deseja efetuar nova consulta ?(s/n)");
	scanf("%s", &resp);
	
	system("cls");
	
}while(resp ='s');

	system("pause");

}
