/*2 - Crie um vetor de tamanho 10, permita que o usu�rio o preencha e informe :
	- A soma e m�dia dos pares;
	- A soma e m�dia dos impares;
	- O total de n�meros pares;
	- O total de n�meros impares;
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i,vetor[10],sp=0,si=0,tp=0,ti=0,medp=0,medi=0;
		printf("Digite 10 valores para o vetor! \n");
		
	for(i=1;i<11;i++){
		printf("Digite o %d valor: ",i);
		scanf("%d",&vetor[i]);
	}
	for(i=1;i<11;i++){
		if(vetor[i] % 2 == 0){
			sp += vetor[i];
			tp +=1;
		}
		else{
			si += vetor[i];
			ti += 1;
			
		}
	}
	medp=sp/tp;
	medi=si/ti;
	printf("- A soma dos numeros pares � %d e a m�dia � %d\n",sp,medp);
	printf("- A soma dos numeros impares � %d e a m�dia � %d\n",si,medi);
	printf("- O total de numeros pares � %d \n",tp);
	printf("- O total de numeros impares � %d \n",ti);
}
