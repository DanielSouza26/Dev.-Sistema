/*3 - Utilizando apenas um vetor de tamanho 6, troque os valores de maneira inversa*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int vet[6],num,cont=0,i;	
	
	printf("Vetor 1");
	for(i = 0; i <= 5 ; i++)
{
	cont=0+i;
	printf("\t[%d] Digite um valor: ",cont);
	scanf("%d",&num);
		vet[i] = num;
}
	printf("vetor 1:\n");
	for(i=5; i>=0;i--)
		printf("%d ", vet[i]);
		printf("\n");

}
