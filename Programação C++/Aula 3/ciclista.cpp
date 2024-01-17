/*Uma bicicleta possui 3 marchas b�sicas, sendo que a primeira faz a roda girar 0,5 vezes a cada pedalada. na segunda marcha, a roda gira uma vez por pedalada.
A terceira marcha faz a roda girar 2 vezes por pedalada. Desenvolva um programa onde o ciclista informe a distancia do seu percurso , e calcule quantas pedaladas ser�o
necess�rias para completar o trajeto  */

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
	
	printf("Digite o di�metro da roda: ");
	scanf("%f", &diam);
	
	printf("Digite o valor da dist�ncia percorrida(Km): ");
	scanf("%f",&dist);
	
	ped = (dist * 1000)/ ((3.14 * diam) /giro);
	
	printf("\n");
	
	printf("Ser�o necess�rias aproximadamente %.0f pedaladas at� seu destino \n", ped);
	

	system("pause");
}


