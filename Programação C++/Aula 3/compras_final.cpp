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
	
	float vprod, vparc, vfinal;
	int qparc;
	
	printf("Valor do produto: ");
	scanf("%f",&vprod);
	
	printf("N�mero de parcelas: ");
	scanf("%d", &qparc);
	
	vfinal = vprod + (vprod * 0.15);
	vparc = vfinal / qparc;
	
	printf("Valor das parcelas: R$ %.2f \n", vparc);	
	printf("Valor final da compra: R$ %.2f ", vfinal);
	
	printf("\n\n");
	
	system("pause");
}
