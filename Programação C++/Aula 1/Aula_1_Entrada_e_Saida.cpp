#include <stdio.h> // funções de entrada e saída
#include<stdlib.h> // comandos de sistema
#include<locale.h> // reconhece caracteres especias
int main()
{
	char nome[16]; // variavel do tipo texto
	setlocale(LC_ALL,"");
	printf("UNIVERSIDADE DE GUARULHOS - CIÊNCIA DA COMPUTAÇÃO\n");
	
	printf("Digite seu nome: ");
	scanf("%s",&nome); // armazenamento na variavel
	
	system("cls");// limpa a tela
	
	printf("BEM-VINDO %s\n\n", nome);
	
	system("pause"); //pressionar qualquer tecla para continuar
}
