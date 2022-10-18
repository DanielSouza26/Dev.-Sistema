/*
Desenvolva um programa que leia a velocidade de um carro (km/h) e a distância a ser percorrida (km) por ele. 
Calcule e apresente na tela, quanto tempo (horas) será necessário para o carro percorrer a distância informada.
*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	
	//Configuração das variáveis
	int velocidade, distancia;
	float tempo;
	
	//Entradas do programa
	printf("Digite sua velocidade médiakm/h: ");
	scanf("%d",&velocidade);
	printf("Digite a distância que será percorrida km: ");
	scanf("%d",&distancia);
	
	
	//Processamento
	tempo = (float) distancia / velocidade;
	
	//Saída
	printf("Esta distancia será percorrida em %.1f horas",tempo);
}

