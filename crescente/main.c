#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int num1, num2, num3;
    printf("digite tres numeros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num2 > num3)
        printf("ordem crescente: %d %d %d", num3, num2, num1);
    if (num3 > num2 && num2 > num1)
        printf("ordem crescente: %d %d %d", num1, num2, num3);
    if (num2 > num1 && num1 > num3)
        printf("ordem crescente: %d %d %d", num3, num1, num2);
    if (num1 > num3 && num3 > num2)
        printf("ordem crescente: %d %d %d", num1, num3, num2);
    if (num2 > num3 && num3 > num1)
        printf("ordem crescente: %d %d %d", num1, num3, num2);
    if (num3 > num1 && num1 > num2)
        printf("ordem crescente: %d %d %d", num2, num1, num3);
    printf("\n");
}