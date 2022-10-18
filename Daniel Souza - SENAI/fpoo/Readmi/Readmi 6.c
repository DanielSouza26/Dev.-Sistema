/*
Sabendo-se que a velocidade de cruzeiro de um avi�o 747-300 � de 900 km/h, 
fa�a um programa que leia uma dist�ncia (km), calcule e apresente na tela, 
quanto tempo (horas) ser� necess�rio para um 747-300 sobrevoar a dist�ncia informada.
*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	
	//Configura��o das vari�veis
	int velocidade, distancia;
	float tempo;
	
	//Entradas do programa
	printf("Digite sua velocidade m�dia do avi�o km/h: ");
	scanf("%d",&velocidade);
	printf("Digite a dist�ncia que ser� percorrida pelo avi�o km: ");
	scanf("%d",&distancia);
	
	
	//Processamento
	tempo = (float) distancia / velocidade;
	
	//Sa�da
	printf("Esta distancia ser� percorrida em %.1f horas",tempo);
}

