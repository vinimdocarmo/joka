#include <stdio.h>

int main(void)
{
    printf("numeros pares de 2 a 50:\n");
    for (int n = 2; n <= 50; n += 2)
    {
        printf("%d\n", n);
    }

    // n++; ======> n = n + 1;
    // n += 2; ======> n = n + 2;
    // n += 3; ======> n = n + 3;
}
