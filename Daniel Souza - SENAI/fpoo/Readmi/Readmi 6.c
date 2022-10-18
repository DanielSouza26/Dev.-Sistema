/*
Sabendo-se que a velocidade de cruzeiro de um avião 747-300 é de 900 km/h, 
faça um programa que leia uma distância (km), calcule e apresente na tela, 
quanto tempo (horas) será necessário para um 747-300 sobrevoar a distância informada.
*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	
	//Configuração das variáveis
	int velocidade, distancia;
	float tempo;
	
	//Entradas do programa
	printf("Digite sua velocidade média do avião km/h: ");
	scanf("%d",&velocidade);
	printf("Digite a distância que será percorrida pelo avião km: ");
	scanf("%d",&distancia);
	
	
	//Processamento
	tempo = (float) distancia / velocidade;
	
	//Saída
	printf("Esta distancia será percorrida em %.1f horas",tempo);
}

