#include <stdio.h>
#include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");
	int a,b;
	printf("Digite seis n�meros inteiros separados por espa�o:");
	scanf("%d",&a);
	scanf("%d",&b);
	
	//Processamento
	if(a > b){
		printf("O maior n�mero � %d\n",a);
		printf("O menor n�mero � %d",b);
	}else{
		printf("O maior n�mero � %d\n",b);
		printf("O menor n�mero � %d",a);
	}
}
