#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int cor;

	printf("Digite a cor so sem�foro: \n[1.verde]\n[2.amarelo]\n[3.vermelho]\n");
	scanf("%d",&cor);
	
	if(cor ==1){
		printf("Voc� escolheu a cor verde, ent�o pode avan�ar!");
	}else if(cor == 2){
		printf("Voc� escolheu amarelo, ent�o fique atento!");
	}else if(cor == 3){
		printf("Voc� escolheu vermelho, ent�o espere at� o sinal ficar verde para avan�ar!");
	}else{
		printf("\n Op��o inv�lida!");
	}
	printf("\n Acabou!");

}
