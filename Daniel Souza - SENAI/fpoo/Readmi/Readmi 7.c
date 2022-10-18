/*
Um caminhão consegue transportar 18 toneladas de laranjas em uma viagem
que faz entre a fazenda e a fábrica de suco de laranja. 
Um alqueire de terra produz em média 250 toneladas de laranjas. 
Faça um programa que leia quantos caminhões e quantos alqueires
uma fazenda produtora de laranjas possui, calcule e apresente na tela
quantas viagens de caminhão serão necessárias para transportar toda a colheita de laranjas.
*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	
	//Configuração das variáveis
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
	
	//Saída
	printf("o total de voltas será %.2f", voltas);
}

