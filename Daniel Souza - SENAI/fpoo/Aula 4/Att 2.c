#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");

	int salario, filhos, salFamilia = 0;
	
	printf("Digite seu salario:");
	scanf("%d",&salario);
	printf("Digite quantos filhos voce tem:");
	scanf("%d",&filhos);
	
	if (salario < 1655){
		salFamilia = 56 * filhos;
	}
	printf("Seu salario final é de %d",salario + salFamilia);
}

