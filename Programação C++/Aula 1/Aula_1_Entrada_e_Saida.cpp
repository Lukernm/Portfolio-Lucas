#include <stdio.h> // fun��es de entrada e sa�da
#include<stdlib.h> // comandos de sistema
#include<locale.h> // reconhece caracteres especias
int main()
{
	char nome[16]; // variavel do tipo texto
	setlocale(LC_ALL,"");
	printf("UNIVERSIDADE DE GUARULHOS - CI�NCIA DA COMPUTA��O\n");
	
	printf("Digite seu nome: ");
	scanf("%s",&nome); // armazenamento na variavel
	
	system("cls");// limpa a tela
	
	printf("BEM-VINDO %s\n\n", nome);
	
	system("pause"); //pressionar qualquer tecla para continuar
}
