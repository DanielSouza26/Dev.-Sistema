/*
Um caminh�o consegue transportar 18 toneladas de laranjas em uma viagem
que faz entre a fazenda e a f�brica de suco de laranja. 
Um alqueire de terra produz em m�dia 250 toneladas de laranjas. 
Fa�a um programa que leia quantos caminh�es e quantos alqueires
uma fazenda produtora de laranjas possui, calcule e apresente na tela
quantas viagens de caminh�o ser�o necess�rias para transportar toda a colheita de laranjas.
*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	
	//Configura��o das vari�veis
	float caminhoes, alqueires, voltas, totalcaminhoes, totalalqueires;
	
	
	//Entradas do programa
	printf("Digite quantos caminhoes a fezenda possui: ");
	scanf("%d",&caminhoes);
	printf("Digite quantos alqueires a fazenda passui: ");
	scanf("%d",&alqueires);
	
	
	//Processamento
	totalalqueires = alqueires * 250;
	totalcaminhoes = caminhoes * 18;
	
	voltas = totalalqueires/totalcaminhoes;
	
	//Sa�da
	printf("o total de voltas ser� %.2f", voltas);
}

