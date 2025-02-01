#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int fat, n;
    printf("fatorial de: ");
    scanf("%d", &n);

    for (fat = 1; n > 1; n--)
        fat = fat * n;

    printf("\nFatorial : %d\n", fat);
}