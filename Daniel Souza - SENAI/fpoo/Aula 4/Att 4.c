#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float a, b, c;
	
	printf("Digite o comprimento do primeiro lado do triangulo: ");
	scanf("%f",&a);
	printf("Digite o comprimento do segundo lado do triangulo: ");
	scanf("%f",&b);
	printf("Digite o comprimento do terceiro lado do triangulo: ");
	scanf("%f",&c);
	
	if(a == b && b == c){
		printf("O triangulo � EQUIL�TERO");
	}else if(a != b && b != c){
		printf("O triangulo � ESCALENO");
	}else{
		printf("O triangulo � IS�CELES");
	}
}
