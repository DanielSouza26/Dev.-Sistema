#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float preco;
	
	printf("Digite o pre�o do produto: ");
	scanf("%f",&preco);
	
	if(preco > 1000){
		preco = preco - preco * 8 / 100;
	}
	printf("O preco final � R$ %.2f",preco);
}
