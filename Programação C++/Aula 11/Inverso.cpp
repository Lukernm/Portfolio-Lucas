#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, vetor[10];
	
	printf("**PROGRAMA INVERSO**\n\n");
	
	//ESCRITA (GRAVA��O)
	for(i=0; i<10; i++){
		printf("%d� - ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("\n---------------------\n\n");
	//LEITURA E EXIBI��O
	for(i=9; i>=0; i--){
		printf("%d - ",vetor[i]);
	}
	
	
	
}
