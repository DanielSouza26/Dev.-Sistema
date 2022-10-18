#include <stdio.h>

int main()
{
    float salarioAnterior,
        percentualDeAumento,
        diferencaEntreSalarios,
        salarioAtual;

    printf("Digite seu sal�rio atual: ");
    scanf("%f", &salarioAnterior);

    if (salarioAnterior <= 280)
        percentualDeAumento = 20;
    else if (salarioAnterior <= 750)
        percentualDeAumento = 15;
    else if (salarioAnterior <= 1500)
        percentualDeAumento = 10;
    else
        percentualDeAumento = 5;
    diferencaEntreSalarios = salarioAnterior * (percentualDeAumento / 100.0);
    salarioAtual = salarioAnterior + diferencaEntreSalarios;
    printf("\nSeu sal�rio antes do reajuste era de R$%.2f", salarioAnterior);
    printf("\nSeu sal�rio foi aumentado em %.1f%%", percentualDeAumento);
    printf("\nSeu sal�rio foi aumentado em R$%.2f", diferencaEntreSalarios);
    printf("\nSeu sal�rio atual � de R$%.2f", salarioAtual);
    return 0;
}
