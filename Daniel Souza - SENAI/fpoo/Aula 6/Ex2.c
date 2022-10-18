/*2 - Crie um vetor de tamanho 10, permita que o usuário o preencha e informe :
	- A soma e média dos pares;
	- A soma e média dos impares;
	- O total de números pares;
	- O total de números impares;
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
	printf("- A soma dos numeros pares é %d e a média é %d\n",sp,medp);
	printf("- A soma dos numeros impares é %d e a média é %d\n",si,medi);
	printf("- O total de numeros pares é %d \n",tp);
	printf("- O total de numeros impares é %d \n",ti);
}
