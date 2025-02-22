#include <stdio.h>

int quadrado(int n)
{
    int m = n * n;
    return m;
}

int main()
{
    int num = 5;
    int res = quadrado(num);
    printf("o quadrado de %d é %d", num, res);
    return 0;
}