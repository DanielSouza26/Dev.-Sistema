#include<stdio.h>
#include<locale.h>
int main(){
		
		//comfigura��es iniciais do programa
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
			printf("ol� %s vo�� � crian�a",nome);
		}else if(idade < 19){
			printf("Ol� %s vo�� � adolecente",nome);
		}else if(idade < 24){
			printf("ol� %s vo�� � jovem",nome);
		}else if(idade < 45){
			printf("ol� %s vo�� � adulto",nome);
		}else if(idade < 60){
			printf("ol� %s vo�� � de meia idade",nome);
		}else{
			printf("ol� %s vo�� � idoso \n",nome);
		}
		printf("segundo a OMS (organiza��o mundial de sa�de).");
					
}
