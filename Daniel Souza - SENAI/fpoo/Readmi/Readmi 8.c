/*

*/
#include <stdio.h>
#include <locale.h> 
int main (){
	setlocale(LC_ALL,""); //Configura o programa para aceitar acentos
	
	//Configura��o das vari�veis
	float raio, altura, area, volume;
	const float pi = 3.14;
	
	
	//Entradas do programa
	printf("para descobrir a area e o volume do cilindro digite:");
	scanf("%d",&raio);
	printf("Altura do cilindro: ");
	scanf("%d",&altura);
	
	
	//Processamento
	area = (2 * pi * raio * altura) + (pi * (raio * raio));
	volume = pi * (raio * raio)* altura;
	
	//Sa�da
	printf("Um cilindro de raio %f cm e altura %f cm tem area total de %.2f cm�:", raio, altura, area);
	printf("\n\nUm cilindro de volume %f cm e altura %f cm tem volume de %.2f cm�:",raio, altura, volume);
}

