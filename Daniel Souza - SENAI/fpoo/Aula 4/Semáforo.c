#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int cor;

	printf("Digite a cor so semáforo: \n[1.verde]\n[2.amarelo]\n[3.vermelho]\n");
	scanf("%d",&cor);
	
	if(cor ==1){
		printf("Você escolheu a cor verde, então pode avançar!");
	}else if(cor == 2){
		printf("Você escolheu amarelo, então fique atento!");
	}else if(cor == 3){
		printf("Você escolheu vermelho, então espere até o sinal ficar verde para avançar!");
	}else{
		printf("\n Opção inválida!");
	}
	printf("\n Acabou!");

}
