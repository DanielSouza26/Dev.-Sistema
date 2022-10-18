#include <stdio.h>
int main()
{
	int i;
    float preco;
    printf("Preço do pão: ");
    scanf("%f", &preco);
    printf("\nLojas Quase Dois - Tabela de preços");
    for (i = 1; i <= 50; i++)
        printf("\n%2d - R$ %5.2f", i, preco * i);
    return 0;
}
