#include <stdio.h>

int soma(int n, int b)
{
    return n + b;
}
int main()
{
    int n = 4;
    int b = 5;
    int resultado = soma(n, b);
    printf("a soma de %d e %d = %d\n", n, b, resultado);
    return 0;
}