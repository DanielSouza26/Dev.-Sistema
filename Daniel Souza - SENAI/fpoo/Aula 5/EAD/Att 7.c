#include <stdio.h>
int main()
{
    char resposta;
    int positivos = 0;

    printf("Telefonou para a v�tima? (S ou N): ");
    scanf("%c", &resposta);
    if (resposta == 'S' || resposta == 's')
        positivos++;
    printf("Esteve no local do crime? (S ou N): ");
    getchar();
    scanf("%c", &resposta);
    if (resposta == 'S' || resposta == 's')
        positivos++;
    printf("Mora perto da v�tima? (S ou N): ");
    getchar();
    scanf("%c", &resposta);
    if (resposta == 'S' || resposta == 's')
        positivos++;
    printf("Devia para a v�tima? (S ou N): ");
    getchar();
    scanf("%c", &resposta);
    if (resposta == 'S' || resposta == 's')
        positivos++;
    printf("J� trabalhou com a v�tima? (S ou N): ");
    getchar();
    scanf("%c", &resposta);
    if (resposta == 'S' || resposta == 's')
        positivos++;

    if (positivos < 2)
        printf("Inocente");
    else if (positivos == 2)
        printf("Suspeita");
    else if (positivos < 5)
        printf("C�mplice");
    else
        printf("Assassino");
    return 0;
}
