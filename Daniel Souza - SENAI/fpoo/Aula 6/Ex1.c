/*1 - Crie dois vetores num�ricos de dimens�o 5 com valores informados pelo usu�rio.
Apresente a soma do primeiro vetor com o inverso do segundo.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");	
	int i,v1[5],v2[5],sv[5];
	
	printf("Entre com 5 valores para o primeiro vetor!\n");
	for(i=1; i<6; i++){
		printf("Digite o valor do vetor:\n ",i);
		scanf("%d",&v1[i]);
	}
	printf("Entre com 5 valores para o segundo vetor!\n");
	for(i=5; i>0; i--){
		printf("Digite o valor do vetor:\n ",i);
		scanf("%d",&v2[i]);
	}
	for(i=1;i<6;i++){
		sv[i]=v1[i]+v2[i];
	}
	printf("\n a soma do primeiro vetor com o inverso do segundo � \n");
	for(i=1; i<6 ; i++){
	 printf(" %d", sv[i]);
	}
}
