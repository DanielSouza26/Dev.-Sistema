#include <stdio.h>
#include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");
	char nome[20];
	float preco;
	//Entradas
	printf("Digite o nome da mercadoria [max 20 letras, sem espa�os]: ");
	scanf("%s",&nome);
	printf("Digite o pre�o da mercadoria: ");
	scanf("%f",&preco);
	//Processamento
	if(preco < 1000){
		preco = preco + preco * (float) 5 / 100;
	}else{
		preco = preco + preco * (float) 7 / 100;
	}
	//Sa�da
	printf("O novo pre�o da mercadoria %s � R$%.2f",nome,preco);
}
