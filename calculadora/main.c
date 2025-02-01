#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int a, b, operador, n;
    char operacao;

    printf("informe tres numeros:\n");
    scanf("%d %d %d", &a, &b, &operador);

    switch (operador)
    {
    case 1:
        operador = a + b;
        operacao = '+';
        break;
    case 2:
        operador = a * b;
        operacao = '*';
        break;
    case 3:
        operador = a / b;
        operacao = '/';
        break;
    case 4:
        operador = a - b;
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

    printf(" resuldato de %d %c %d = %d \n", a, operacao, b, operador);
}