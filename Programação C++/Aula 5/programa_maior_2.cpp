/* */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	printf("******************************************** \n");
	printf("*                PROGRAMA MAIOR            * \n");
	printf("******************************************** \n");
	
	int Ni_1, Ni_2, Ni_3;
	
	printf("Digite o primeiro n�mero inteiro: ");
	scanf("%d",&Ni_1);
	
	printf("Digite o segundo n�mero inteiro: ");
	scanf("%d",&Ni_2);
	
	printf("Digite o terceiro n�mero inteiro: ");
	scanf("%d",&Ni_3);
	
	if(Ni_1 > Ni_2){
		if(Ni_1 > Ni_3){
			printf("%d � o maior", Ni_1);
		}
		else{
			printf("%d � o maior", Ni_3);
		}
	}
	else{
		if(Ni_2 > Ni_3){
			printf("%d � o maior",Ni_2);
		}
		else{
			printf("%d � o maior",Ni_3);
		}
	}

	printf("\n\n");
	system("pause");
}

