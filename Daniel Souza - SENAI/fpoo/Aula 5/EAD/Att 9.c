#include <stdio.h>
int main()
{
	int i;
    float preco;
    printf("Pre�o do p�o: ");
    scanf("%f", &preco);
    printf("\nLojas Quase Dois - Tabela de pre�os");
    for (i = 1; i <= 50; i++)
        printf("\n%2d - R$ %5.2f", i, preco * i);
    return 0;
}
