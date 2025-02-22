#include <stdio.h>

void dobra_numero(int num)
{
    int dobro = num * 2;
    printf("o drobro de %d é %d\n", num, dobro);
}
int main()
{
    int m;
    printf("digite um numero: ");
    scanf("%d", &m);
    dobra_numero(m);
    return 0;
}