#include <stdio.h>

int main(void)
{

    int soma = 0, contador;

    for (int contador = 0; contador <= 100; contador++)
    {
        soma = soma + contador;
    }
    printf("A soma de 1 até 100 é: %d \n", soma);
}