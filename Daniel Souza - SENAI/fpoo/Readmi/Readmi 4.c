/*
Desenvolva um programa que leia o nome de um time de futebol, o n�mero de vit�rias e o n�mero de empates. 
O programa dever� calcular e apresentar na tela, o nome do time e o total de pontos. 
Lembrando que a vit�ria vale 3 pontos e o empate vale 1 ponto.
*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	char nome[20];
	
	//Configura��o das vari�veis
	int vitorias, empates, pontosTotais;
	
	//Entradas do programa
	printf("Digite o nome do time:");
	scanf("%s",&nome);
	printf("Digite o numero de vitorias: ");
	scanf("%d",&vitorias);
	printf("Digite o numero de empates: ");
	scanf("%d",&empates);
	
	//Processamento
	vitorias = vitorias * 3;
	empates = empates * 1;
	pontosTotais = vitorias + empates;
	
	//Sa�da
	printf("O total de pontos �: %d",pontosTotais);
}

