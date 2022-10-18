#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	
	int i = 10;
	while(i <= 1000000000000000000){
		printf("%d\n",i);
		i++;
	}
}
