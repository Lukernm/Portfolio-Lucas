/*uma loja esta oferecendo a oportunidade de seus clientes parcelarem as compras, mediante um acr�scimo de juros de 15% sobre o valor do produto.
Para isso, faz-se necess�rio um programa que possibilite o c�lculo do valor de cada parcela, exibindo tamb�m o valor final a ser pago com
o reajuste aplicado. fa�a o programa */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,""); 
	//vp - valor do produto, qp - quantidade de parcela
	printf("******************************************** \n");
	printf("*            PORGRAMA DA LOJA              * \n");
	printf("******************************************** \n");
	float vc, qp;
	
	printf("Digite o valor da sua compra: ");
	scanf("%f",&vc);
	
	printf("O valor da sua compra foi de %.2f \n",vc);
	
	printf("****************************************** \n");
	printf("*  VALOR DA COMPRA      /     PARCELAS   *");
	printf("*   at� R$200,00                   ")
	
	printf("Digite o valor de parcelas que deseja fazer: ");
	scanf("%f",&qp);
	

	
	system("pause");
}
