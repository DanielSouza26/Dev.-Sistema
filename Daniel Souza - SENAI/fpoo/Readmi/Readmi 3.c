/*
Desenvolva um programa que leia o nome e o salário de uma pessoa, depois leia o valor do índice percentual (%) de
reajuste do salário. Calcule e apresente na tela, o valor do novo salário e o nome da pessoa.
*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	
	//Configuração das variáveis
	int salario,aumento;
	float reajuste;
	
	//Entradas do programa
	printf("Digite o salario atual: ");
	scanf("%d",&salario);
	printf("Digite a porcentagem de aumento: ");
	scanf("%d",&aumento);
	
	//Processamento
	reajuste = (float) (salario * aumento) / 100;
	salario = (float) salario + reajuste;
	
	//Saída
	printf("O resultado da conta: %d",salario);
}

