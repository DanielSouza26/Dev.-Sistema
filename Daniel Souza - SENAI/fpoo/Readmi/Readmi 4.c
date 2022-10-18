/*
Desenvolva um programa que leia o nome de um time de futebol, o número de vitórias e o número de empates. 
O programa deverá calcular e apresentar na tela, o nome do time e o total de pontos. 
Lembrando que a vitória vale 3 pontos e o empate vale 1 ponto.
*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	char nome[20];
	
	//Configuração das variáveis
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
	
	//Saída
	printf("O total de pontos é: %d",pontosTotais);
}

