#include <stdio.h>
#include <locale.h>
int main()
{
    float a, b, c, delta, raiz1, raiz2;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    if (a == 0)
        printf("N�o � uma equa��o do segundo grau");
    else
    {
        printf("Digite o valor de b: ");
        getchar();
        scanf("%f", &b);
        printf("Digite o valor de c: ");
        getchar();
        scanf("%f", &c);
        delta = pow(b, 2) - (4 * a * c);
        if (delta < 0)
            printf("Delta menor que 0. N�o h� ra�zes reais.");
        else if (delta == 0)
        {
            raiz1 = (-b) / (2 * a);
            printf("Delta � zero. A ra�z � %f, raiz", raiz1);
        }
        else
        {
            raiz1 = (-b + sqrt(delta)) /
                    (2 * a); // sqrt � a fun��o de raiz quadrada da biblioteca
                             // matem�tica
            raiz2 = (-b - sqrt(delta)) / (2 * a);
            printf("Delta maior que zero. A ra�z 1 � %f, e a raiz 2 � %f",
                   raiz1, raiz2);
        }
    }
    return 0;
}
