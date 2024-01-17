/* em uma determinada cidade será realizada uma eleição onde estão concorrendo 4 candidatos reconhecidos 
pelo numero de sua legenda 
NUMERO    CANDIDATO
1         ORTIZ
2         HEREDIA
3         ALBUQUERQUE
4         UHLMANN
0         NULO
X         BRANCO
Ao chegar ao terminal, o eleitor deve informar o numero de seu candidato e de acordo com sua escolha o voto
será computado ao respectivo candidato. a eleição será encerrada a partir do momento em que for digitado um código negativo,
sendo exibido um relatorio contendo:
- total de eleitores participantes
- numero de votos em cada candidato 
- um grafico que representa o percentual de cada candidato */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	
	int Num_Cand, Tot_Eleit = 0;
	int Qt_Cand1 = 0, Qt_Cand2 = 0, Qt_Cand3 = 0, Qt_Cand4 = 0, Qt_Branco = 0, Qt_Nulo = 0;
	float P_Cand1, P_Cand2, P_Cand3, P_Cand4, P_Branco, P_Nulo;
	char Nome[20];
	int i;
	setlocale(LC_ALL,"");
	
do{
	
	printf("****** PROGRAMA ELEIÇÃO ******\n");
	
	printf("Informe o número do candidato: \n");
	printf("Legenda \t\tCandidato\n");
	printf("---------------------------------------------\n");
	printf("1 \t\t\tORTIZ\n");
	printf("2 \t\t\tHEREDIA\n");
	printf("3 \t\t\tALBUQUERQUE\n");
	printf("4 \t\t\tUHLMANN\n");
	printf("0 \t\t\tNULO\n");
	printf("(Qualque valor) \tBRANCO\n\n");
	
	printf("Digite seu voto: ");
	scanf("%d",&Num_Cand);
	
	if(Num_Cand == 0){
		Qt_Nulo++; //Qt_Nulo = Qt_Nulo++;
		Tot_Eleit++;
		strcpy(Nome, "NULO");
		
	}else if(Num_Cand == 1){
		Qt_Cand1++;
		Tot_Eleit++;
		strcpy(Nome, "ORTIZ");
		
	}else if(Num_Cand == 2){
		Qt_Cand2++;
		Tot_Eleit++;
		strcpy(Nome, "HEREDIA");
		
	}else if(Num_Cand == 3){
		Qt_Cand3++;
		Tot_Eleit++;
		strcpy(Nome, "ALBUQUERQUE");
		
	}else if(Num_Cand == 4){
		Qt_Cand4++;
		Tot_Eleit++;
		strcpy(Nome, "UHLMANN");
		
	}else if(Num_Cand < 0){
		break; //finaliza
	}else{
		Qt_Branco++;
		Tot_Eleit++;
		strcpy(Nome, "BRANCO");
	}
	
	printf("%s",Nome);
	_sleep(800);
	
	system("cls");
	
}while(Num_Cand >= 0);
	
	P_Cand1 = ((float)Qt_Cand1/(float)Tot_Eleit)*100;
	P_Cand2 = ((float)Qt_Cand2/(float)Tot_Eleit)*100;
	P_Cand3 = ((float)Qt_Cand3/(float)Tot_Eleit)*100;
	P_Cand4 = ((float)Qt_Cand4/(float)Tot_Eleit)*100;
	P_Branco = ((float)Qt_Branco/(float)Tot_Eleit)*100;
	P_Nulo = ((float)Qt_Nulo/(float)Tot_Eleit)*100; 
	
	system("cls");
	printf("**** RESULTADOS FINAIS ****\n");
	
	printf("ORTIZ: %d votos\n", Qt_Cand1);
	for(i = 0; i < P_Cand1; i++){
		printf("|");
		_sleep(30);
	}
	printf(" - %.1f%%\n",P_Cand1);
	//////////////////////////////////////////
	printf("HEREDIA: %d votos\n", Qt_Cand2);
	for(i = 0; i < P_Cand2; i++){
		printf("|");
		_sleep(30);
	}
	printf(" - %.1f%%\n",P_Cand2);
	/////////////////////////////////////////
	printf("ALBUQUERQUE: %d votos\n", Qt_Cand3);
	for(i = 0; i < P_Cand3; i++){
		printf("|");
		_sleep(30);
	}
	printf(" - %.1f%%\n",P_Cand3);
	////////////////////////////////////////
	printf("UHLMANN: %d votos\n", Qt_Cand4);
	for(i = 0; i < P_Cand4; i++){
		printf("|");
		_sleep(30);
	}
	printf(" - %.1f%%\n",P_Cand4);
	////////////////////////////////////////
	printf("BRANCO: %d votos\n", Qt_Branco);
	for(i = 0; i < P_Branco; i++){
		printf("|");
		_sleep(30);
	}
	printf(" - %.1f%%\n",P_Branco);
	///////////////////////////////////////
	printf("NULO: %d votos\n", Qt_Nulo);
	for(i = 0; i < P_Nulo; i++){
		printf("|");
		_sleep(30);
	}
	printf(" - %.1f%%\n",P_Nulo);
	
	printf("\n\n");
	system("pause");
		
}
















