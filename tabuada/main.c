#include <stdio.h>

int main(void)
{
    int numero, resultado, contador;
    printf("informe o nuemro para saber sua tabuada: ");
    scanf("%d", &numero);

    for (contador = 1; contador <= 10; contador++)
    {
        resultado = numero * contador;
        printf("%d X %d = %d\n", numero, contador, resultado);
    }
}