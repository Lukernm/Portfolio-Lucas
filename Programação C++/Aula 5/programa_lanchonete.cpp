/* uma lanchonete possui em seu cardapio uma variedade de lanches que variam de pre�o de acordo com a tabela abaixo:
   C�D  /       LANCHE     / PRE�O
   1        p�o na chapa     2,50
   2           Bauru         3,50
   3           Hot-Dog       5,00
   4          X-Burguer      6,50
   5          X-tudo         10,00
   
   al�m dos lanches, o cliente pode solicitar um acompanhamento, seguindo a lista:
   C�D  /       acompanhamento    / PRE�O
   1            Fritas             5,00
   2           Camar�o             12,00
   3           Polenta             7,00
   
   e por fim a bebida:
   C�D  /       bebida      / PRE�O
   1            Agu�           2,00
   2           Pingado         3,00
   3         Refrigerante      5,00
   
   desenvolva um programa que permita ao cliente optar por cada um dos itens acima e montar o seu combo, informando
   ao fim, o valor total da compra. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	
	int codLanche, codAcomp, codBeb ; 
	char nomeLanche[20], nomeAcomp[20], nomeBeb[20], resp;
	float ValorTotal = 0;
	
	setlocale(LC_ALL,"");

do{
	
	
	printf("******************************************** \n");
	printf("*             PROGRAMA LANCHONETE          * \n");
	printf("******************************************** \n");
	
	printf("C�DIGO\t\tLANCHE\t\tPRE�O\n\n");
	printf("1\t\tP�o na Chapa\tR$ 2,50\n\n");
	printf("2\t\tBauru\t\tR$ 3,50\n\n");
	printf("3\t\tHot-Dog\t\tR$ 5,00\n\n");
	printf("4\t\tX-Burguer\tR$ 6,50\n\n");
	printf("5\t\tX-tudo\t\tR$ 10,0\n\n");
	
	printf("Digite o c�digo do Lanche: ");
	scanf("%d", &codLanche);
	system("cls");
	
	printf("C�DIGO\t\tAcompanhamento\t\tPRE�O\n\n");
	printf("1\t\tFritas\t\t\tR$ 5,00\n\n");
	printf("2\t\tPolenta\t\t\tR$ 7,00\n\n");
	printf("3\t\tCamar�o\t\t\tR$ 12,00\n\n");
	
	printf("Digite o c�digo do Acompanhamento: ");
	scanf("%d", &codAcomp);
	system("cls");
	
	printf("C�DIGO\t\tBebida\t\t\tPRE�O\n\n");
	printf("1\t\t�gua\t\t\tR$ 2,00\n\n");
	printf("2\t\tPingado\t\t\tR$ 3,00\n\n");
	printf("3\t\tRefrigerante\t\tR$ 5,00\n\n");
	
	printf("Digite o c�digo da Bebida: ");
	scanf("%d", &codBeb);
	
	if(codLanche == 1){
		strcpy(nomeLanche, "P�o na Chapa");
		ValorTotal = ValorTotal + 2.5;	
	}
	else if(codLanche == 2){
		strcpy(nomeLanche, "Bauru");
		ValorTotal = ValorTotal + 3.5;	
	}
	else if(codLanche == 3){
		strcpy(nomeLanche, "Hot-Dog");
		ValorTotal = ValorTotal + 5;	
	}
	else if(codLanche == 4){
		strcpy(nomeLanche, "X-Burguer");
		ValorTotal = ValorTotal + 6.5;	
	}
	else if(codLanche == 5){
		strcpy(nomeLanche, "X-Tudo");
		ValorTotal = ValorTotal + 10;	
	}
	else{
		strcpy(nomeLanche,"Nenhum Lanche");
	}
	
	if(codAcomp == 1){
		strcpy(nomeAcomp, "Fritas");
		ValorTotal = ValorTotal + 5;
	}
	else if(codAcomp == 2){
		strcpy(nomeAcomp, "Polenta");
		ValorTotal = ValorTotal + 7;
	}
	else if(codAcomp == 3){
		strcpy(nomeAcomp, "Camar�o");
		ValorTotal = ValorTotal + 12;
	}
	else{
		strcpy(nomeAcomp,"Nenhum Acompanhamento");
	}
	
	if(codBeb == 1){
		strcpy(nomeBeb, "�gua");
		ValorTotal = ValorTotal + 2;
	}
	else if(codBeb == 2){
		strcpy(nomeBeb, "Pingado");
		ValorTotal = ValorTotal + 3;
	}
	else if(codBeb == 3){
		strcpy(nomeBeb, "Refrigerante");
		ValorTotal = ValorTotal + 5;
	}
	else{
		strcpy(nomeBeb,"Nenhuma Bebida");
	}
	//Exibi��o final dos dados
	
	printf("Combo Escolhido\n");
	printf("(%s +", nomeLanche);
	printf("%s +", nomeAcomp);
	printf("%s )", nomeBeb);
	
	printf("Total a pagar: R$ %.2f",ValorTotal);
	
	printf("\n\n");
	
	printf("Efetuar nova venda?  (s/n)");
	scanf("%s", &resp);
	
	system("cls");
	
}while(resp == 's');

	printf("\n\n");
	system("pause");
}












