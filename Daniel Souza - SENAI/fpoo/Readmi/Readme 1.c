/*
Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c.
*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	
	//Configuração das variáveis
	int a,b,c,d;
	
	//Entradas do programa
	printf("Digite um número inteiro: ");
	scanf("%d",&a);
	printf("Digite outro número inteiro: ");
	scanf("%d",&b);
	printf("Digite outro número inteiro: ");
	scanf("%d",&c);
	
	//Processamento
	d = (a + b) / c;
	
	//Saída
	printf("O resultado da conta (a + b) / c: %d",d);
}

