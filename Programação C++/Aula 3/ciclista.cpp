/*Uma bicicleta possui 3 marchas básicas, sendo que a primeira faz a roda girar 0,5 vezes a cada pedalada. na segunda marcha, a roda gira uma vez por pedalada.
A terceira marcha faz a roda girar 2 vezes por pedalada. Desenvolva um programa onde o ciclista informe a distancia do seu percurso , e calcule quantas pedaladas serão
necessárias para completar o trajeto  */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,""); 
	printf("******************************************** \n");
	printf("*            PORGRAMA DO CICLISTA          * \n");
	printf("******************************************** \n");
	
	float ped, giro, diam, dist;
	
	printf("Digite a quantidade de giros por pedalada: ");
	scanf("%f", &giro);
	
	printf("Digite o diâmetro da roda: ");
	scanf("%f", &diam);
	
	printf("Digite o valor da distância percorrida(Km): ");
	scanf("%f",&dist);
	
	ped = (dist * 1000)/ ((3.14 * diam) /giro);
	
	printf("\n");
	
	printf("Serão necessárias aproximadamente %.0f pedaladas até seu destino \n", ped);
	

	system("pause");
}


