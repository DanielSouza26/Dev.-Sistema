/*
Desenvolva um programa que leia tr�s vari�veis (a, b, c) e resolva a express�o: ( a + b ) / c.
*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	
	//Configura��o das vari�veis
	int a,b,c,d;
	
	//Entradas do programa
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&a);
	printf("Digite outro n�mero inteiro: ");
	scanf("%d",&b);
	printf("Digite outro n�mero inteiro: ");
	scanf("%d",&c);
	
	//Processamento
	d = (a + b) / c;
	
	//Sa�da
	printf("O resultado da conta (a + b) / c: %d",d);
}

