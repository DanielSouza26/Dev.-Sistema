#include<stdio.h>
#include<locale.h>
int main(){
		
		//comfigurações iniciais do programa
		setlocale(LC_ALL,"");
		char nome[10];
		int idade;
		
		//entrada
		printf("digite o seu nome:");
		scanf("%s",&nome);
		printf("digite sua idade:");
		scanf("%d",&idade);
		
		//processamento
		if(idade < 10){
			printf("olá %s voçê é criança",nome);
		}else if(idade < 19){
			printf("Olá %s voçê é adolecente",nome);
		}else if(idade < 24){
			printf("olá %s voçê é jovem",nome);
		}else if(idade < 45){
			printf("olá %s voçê é adulto",nome);
		}else if(idade < 60){
			printf("olá %s voçê é de meia idade",nome);
		}else{
			printf("olá %s voçê é idoso \n",nome);
		}
		printf("segundo a OMS (organização mundial de saúde).");
					
}
