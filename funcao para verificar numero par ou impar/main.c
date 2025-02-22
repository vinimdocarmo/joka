#include <stdio.h>

int par_ou_impar(int p)
{
    if (p % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{

    int n;

    printf("digite um numero: ");
    scanf("%d", &n);
    // executando a funcao par_ou_impar passando(n) como seu paramentro
    // e atribunido o resultado a variavel res.
    int res = par_ou_impar(n);
    // executando a funcao par_ou_impar passando (n) como seu paramentro
    //e verificando se o resultado é igual a 1.
    if (par_ou_impar(n) == 1)
    {
        printf("numero e par");
    }
    else
    {
        printf("numero impar");
    }
}
