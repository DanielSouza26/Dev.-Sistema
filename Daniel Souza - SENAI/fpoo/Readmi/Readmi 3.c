/*
Desenvolva um programa que leia o nome e o sal�rio de uma pessoa, depois leia o valor do �ndice percentual (%) de
reajuste do sal�rio. Calcule e apresente na tela, o valor do novo sal�rio e o nome da pessoa.
*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	
	//Configura��o das vari�veis
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
	
	//Sa�da
	printf("O resultado da conta: %d",salario);
}

