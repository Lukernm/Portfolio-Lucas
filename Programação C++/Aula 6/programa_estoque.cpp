/* um supermercado necessita fazer um inventario em seus produtos em estoque, separando os em varias categorias e contabilizando a quantidade de 
itens em cada uma delas. as categorias de produtos seguem de acordo com a tabela abaixo
1 - limpeza
2- utensiliios domesticos
3- bebidas
4- doces
5- frios
6- salgadinhos
7- grãos
ao digitar a categoria do produto este deve ser contabilzado no seu devido genero e uma fez q o usuario digitar a categoria 0, da se o progrma como 
encerrado. ao fim deverá ser exibido com a quantidade de cada protudo em sua categoria e o total de produtos 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	int categoria;
	int quantLimp = 0, quantDom = 0, quantBeb = 0, quantDoces = 0, quantFrios = 0, quantSalg = 0, quantGraos = 0;
	int total;
	char nomeCat[30];
	
	
	setlocale(LC_ALL,""); 
	
	do{

		printf("******************************************** \n");
		printf("****         PORGRAMA ESTOQUE           **** \n");
		printf("******************************************** \n");
		
		printf("Informe a categoria do Produto: ");
		scanf("%d",&categoria);
		
		switch(categoria){
			case 1:
				quantLimp++;
				strcpy(nomeCat,"Limpeza");
				printf("%s -- %d\n", nomeCat, quantLimp);
				_sleep(1000);
				break;
				
			case 2:
				quantDom++;
				strcpy(nomeCat,"Utensílios Domésticos");
				printf("%s -- %d\n", nomeCat, quantDom);
				_sleep(1000);	
				break;
				
			case 3:
				quantBeb++;
				strcpy(nomeCat,"Bebidas");
				printf("%s -- %d\n", nomeCat, quantBeb);
				_sleep(1000);
				break;
				
			case 4:
				quantDoces++;
				strcpy(nomeCat,"Doces");
				printf("%s -- %d\n", nomeCat, quantDoces);	
				_sleep(1000);
				break;
				
			case 5:
				quantFrios++;
				strcpy(nomeCat,"Frios");
				printf("%s -- %d\n", nomeCat, quantFrios);	
				_sleep(1000);
				break;
				
			case 6:
				quantSalg++;
				strcpy(nomeCat,"Salgadinhos");
				printf("%s -- %d\n", nomeCat, quantSalg);	
				_sleep(1000);
				break;
				
			case 7:
				quantGraos++;
				strcpy(nomeCat,"Grãos");
				printf("%s -- %d\n", nomeCat, quantGraos);
				_sleep(1000);		
				break;
			case 0:
				break;
					
			default:
				printf("Categoria Inválida");
				_sleep(1000);
				break;	
		}
		
		system("cls");
		
	}while(categoria != 0);
	
		system("cls");
		
		printf("Código \t\tItem \t\tQuantidade\n");
		printf("----------------------------------------------\n");
		printf("1 \t\tLimpeza \t\t%d \n", quantLimp);
		printf("2 \t\tBebidas \t\t%d \n", quantBeb);
		printf("3 \t\tUten. Dom. \t\t%d \n", quantDom);
		printf("4 \t\tDoces \t\t\t%d \n", quantDoces);
		printf("5 \t\tFrios \t\t\t%d \n", quantFrios);
		printf("6 \t\tSalgadinhos \t\t%d \n", quantSalg);
		printf("7 \t\tGrãos \t\t\t%d \n", quantGraos);
		
		total = quantLimp + quantDom + quantBeb + quantDoces + quantFrios + quantSalg + quantGraos;
		
		printf("Total de Itens: %d", total);


	
	printf("\n\n");
	system("pause");
}





















