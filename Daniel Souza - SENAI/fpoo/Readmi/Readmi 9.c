/*

*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	char cidade [30];
	
	//Configuração das variáveis
	int votos, eleitores;
	float porcentagem;
	
	
	//Entradas do programa
	printf("Cidade:");
	scanf("%s",&cidade);
	printf("Quantidade de eleitores: ");
	scanf("%d",&eleitores);
	printf("Quantidade de votos: ");
	scanf("%d",&votos);
	
	
	//Processamento
	porentagem = (float) votos * 100 / eleitores;
	
	//Saída
	printf("A %% de paticipação na eleição da cidade %s foi de %.2f %%",cidade, porcentagem)

}

