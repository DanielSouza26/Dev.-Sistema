#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float salario, inssReal, inssPorc, salFinal;
	
	printf("Digite o seu salario: ");
	scanf("%f",&salario);
	
	if(salario <= 1212.00){
		inssPorc = (float) 7.5 / 100;
		inssReal = salario * inssPorc;
	}else if(salario < 2427 / 36){
		inssPorc = (float) 9 / 100;
		inssReal = salario * inssPorc;
	}else if(salario < 3641.04){
		inssPorc = (float) 12 /100;
		inssReal = salario * inssPorc;
	}else if(salario < 7087.23){
		inssPorc = (float) 14 /100;
		inssReal = salario * inssPorc;
	}else{
		inssPorc = 14 /100;
		inssReal = 7087.22 * inssPorc;
	}
	salFinal = salario - inssReal;
	
	
	printf("O desconto do INSS sera de R$ %.2f",inssReal);
	printf("O salario final sera de R$ %.2f",salario + inssReal);
}
