#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma(int a, int b)
{
    int s = a + b;
    return s;
}

int subtracao(int a, int b)
{
    int s = a - b;
    return s;
}

int multiplicao(int a, int b)
{
    int s = a * b;
    return s;
}

int divisao(int a, int b)
{
    int s = a / b;
    return s;
}

int main(void)
{

    int a, b, operador, resultado, n;
    char operacao;

    printf("informe tres numeros:\n");
    scanf("%d %d %d", &a, &b, &operador);

    switch (operador)
    {
    case 1:
        resultado = soma(a, b);
        operacao = '+';
        break;
    case 2:
        resultado = multiplicao(a, b);
        operacao = '*';
        break;
    case 3:
        resultado = divisao(a, b);
        operacao = '/';
        break;
    case 4:
        resultado = subtracao(a, b);
        operacao = '-';
        break;

    default:
        printf("voce so pode escolher de 1 a 4: ");
        return 0;
    } 

    // operador 1
    //  resultado de 2 + 2 = 4
    // operador 2
    //  resultado de 2 * 2 = 4

    printf(" resuldato de %d %c %d = %d \n", a, operacao, b, resultado);
}